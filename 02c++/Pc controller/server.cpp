#include <iostream>
#include <cstdlib>  // For system()
#include <cstring>  // For strcmp
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

void executeCommand(const std::string& command) {
    std::cout << "Executing command: " << command << std::endl;  // Display the command in the terminal

    // Construct the command with redirection to /dev/null to suppress GTK warnings
    std::string full_command;

    if (command == "terminal") {
        full_command = "gnome-terminal > /dev/null 2>&1";
    } else if (command == "firefox") {
        full_command = "firefox > /dev/null 2>&1";
    } else if (command == "facebook") {
        full_command = "xdg-open https://www.facebook.com > /dev/null 2>&1";
    } else if (command == "github") {
        full_command = "xdg-open https://www.github.com > /dev/null 2>&1";
    } else if (command == "linkedin") {
        full_command = "xdg-open https://www.linkedin.com > /dev/null 2>&1";
    } else if (command == "youtube") {
        full_command = "xdg-open https://www.youtube.com > /dev/null 2>&1";
    } else {
        std::cerr << "Unknown command: " << command << std::endl;
        return;
    }

    // Execute the command
    int result = system(full_command.c_str());
    if (result != 0) {
        std::cerr << "Failed to execute command: " << command << std::endl;
    }
}

int main() {
    int sockfd, newsockfd;
    sockaddr_in serv_addr, cli_addr;
    socklen_t clilen;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        std::cerr << "Error opening socket" << std::endl;
        return 1;
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(8081);  // Make sure this port is not in use

    if (bind(sockfd, (sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        std::cerr << "Error on binding" << std::endl;
        return 1;
    }

    listen(sockfd, 5);
    clilen = sizeof(cli_addr);

    while (true) {
        newsockfd = accept(sockfd, (sockaddr *) &cli_addr, &clilen);
        if (newsockfd < 0) {
            std::cerr << "Error on accept" << std::endl;
            continue;
        }

        char buffer[256];
        bzero(buffer, 256);
        read(newsockfd, buffer, 255);

        std::string command(buffer);
        command.erase(command.find_last_not_of(" \n\r\t") + 1);  // Remove trailing whitespace

        executeCommand(command);
        close(newsockfd);
    }

    close(sockfd);
    return 0;
}
