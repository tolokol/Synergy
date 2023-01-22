#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;

    char arr[n]; // creating an array of characters with n elements

    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "второй символ массива: " << arr[1] << endl;

    return 0;
}