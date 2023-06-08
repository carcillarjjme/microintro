#include <iostream>
#include <iomanip> // Required for std::setprecision

void println(const std::string& message) {
    std::cout << message << std::endl;
}

void println(int value) {
    std::cout << value << std::endl;
}

void println(float value) {
    std::cout << std::fixed << std::setprecision(5) << value << std::endl;
}

void print(const std::string& message) {
    std::cout << message;
}

void print(int value) {
    std::cout << value;
}

void print(float value) {
    std::cout << std::fixed << std::setprecision(2) << value;
}
