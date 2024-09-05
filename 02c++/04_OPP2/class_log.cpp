#include <iostream>
#include <vector>
#include <string>

class LOG {
public:
    enum class Level {
        INFO,
        WARN,
        ERROR,
        DEBUG
    };

private:
    std::vector<std::string> buffer;  // buffer is now non-static
    Level currentLevel;

public:
    // Constructor to initialize the default log level
    LOG() : currentLevel(Level::INFO) {}

    // Set the current logging level
    void SetLevel(Level level) {
        currentLevel = level;
    }

    // Log a message with a specific level
    LOG& operator<<(const std::pair<Level, std::string>& logEntry) {
        Level level = logEntry.first;
        const std::string& message = logEntry.second;

        if (static_cast<int>(level) >= static_cast<int>(currentLevel)) {
            buffer.push_back(message);
        }
        return *this;
    }

    // Dump all messages in the buffer
    void Dump() const {
        for (const auto& msg : buffer) {
            std::cout << msg << std::endl;
        }
    }

    // Clear the buffer
    void Clear() {
        buffer.clear();
    }
};

int main() {
    LOG logger;
    logger.SetLevel(LOG::Level::WARN);

    logger << std::make_pair(LOG::Level::INFO, "This is an info message"); // Will not be logged
    logger << std::make_pair(LOG::Level::WARN, "Forget to close file");
    logger << std::make_pair(LOG::Level::ERROR, "Error occurred");

    std::cout << "Dumping logs:" << std::endl;
    logger.Dump();

    std::cout << "Clearing logs." << std::endl;
    logger.Clear();

    std::cout << "Dumping logs after clear:" << std::endl;
    logger.Dump();

    return 0;
}
