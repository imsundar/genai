#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero." << std::endl;
        return 0.0;
    }
    return static_cast<float>(a) / b;
}

int main() {
    int x = 10, y = 5;

    std::cout << "Add: " << add(x, y) << std::endl;
    std::cout << "Subtract: " << subtract(x, y) << std::endl;
    std::cout << "Multiply: " << multiply(x, y) << std::endl;
    std::cout << "Divide: " << divide(x, y) << std::endl;

    return 0;
}
