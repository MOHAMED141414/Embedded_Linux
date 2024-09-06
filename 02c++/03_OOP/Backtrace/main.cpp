#include "backtrace.hpp"

void simpleFunction() {
    EnterFn;
    std::cout << "Inside simpleFunction" << std::endl;
    if (logFile.is_open()) {
        logFile << "Inside simpleFunction" << std::endl;
    }
    ExitFn;
}

int main() {
    EnterFn;
    simpleFunction();
    PRINT_BACKtrace;
    ExitFn;

    return 0;
}
