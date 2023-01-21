#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество элементов: ";
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Введите элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}