#include <bits/stdc++.h>
#include "backtrace.hpp"


const std::string logFileName = "backtrace_log.txt";


std::ofstream logFile(logFileName, std::ios::app);

std::queue<std::string> backtrace::functions;

backtrace::backtrace(std::string function, int line) : Function_Name(function), Entry_Line(line) {
    
    std::string logMessage = "Enter to [ " + function + " ] at line " + std::to_string(line);
    std::cout << logMessage << std::endl;
    if (logFile.is_open()) {
        logFile << logMessage << std::endl;
    }
    functions.push(function);
}

backtrace::~backtrace() {
    
    if (logFile.is_open()) {
        logFile.close();
    }
}

void backtrace::print() {
    std::queue<std::string> temp = functions;
    int counter = 0;
    if (temp.empty()) {
        std::string emptyMessage = "Queue is empty";
        std::cout << emptyMessage << std::endl;
        if (logFile.is_open()) {
            logFile << emptyMessage << std::endl;
        }
        return;
    }
    while (!temp.empty()) {
        std::string logMessage = std::to_string(counter++) + "- " + temp.front();
        std::cout << logMessage << std::endl;
        if (logFile.is_open()) {
            logFile << logMessage << std::endl;
        }
        temp.pop();
    }
    std::string finishedMessage = "Backtrace is finished";
    std::cout << finishedMessage << std::endl;
    if (logFile.is_open()) {
        logFile << finishedMessage << std::endl;
    }
}

void backtrace::exit(int line) {
    
    std::string logMessage = "Exit from [ " + Function_Name + " ] at line " + std::to_string(line);
    std::cout << logMessage << std::endl;
    if (logFile.is_open()) {
        logFile << logMessage << std::endl;
    }
}

void backtrace::clear_queue() {
    while (!functions.empty()) {
        functions.pop();
    }
}