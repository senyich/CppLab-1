#include <iostream>
#include <string>
#include "../namespaces/console.h"

void Console::writeLine(const std::string& message) {
    std::cout << message << std::endl;
}

void Console::write(const std::string& message) {
    std::cout << message;
}

void Console::readLine(std::string& message, std::string& data) {
    std::cout << message << " ";
    std::getline(std::cin, data);
}