#include <iostream>

int main() {
    int num1, num2;

    std::cout << "введи число : ";
    std::cin >> num1;
    std::cout << "введи еще число: ";
    std::cin >> num2;

    if (num1 > num2) {
        std::cout << "Больше" << std::endl;
    } else if (num1 < num2) {
        std::cout << "Меньше" << std::endl;
    } else {
        std::cout << "Равны" << std::endl;
    }

    return 0;
}