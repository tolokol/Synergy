#include <iostream>

int main() {
    int num1, num2;
    int pass1 = 1234;
    int pass2 = 5678;

    std::cout << "Log: ";
    std::cin >> num1;
    std::cout << "pass: ";
    std::cin >> num2;

    if (num1 == pass1 && num2 == pass2) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "error" << std::endl;
    }

    return 0;
}
