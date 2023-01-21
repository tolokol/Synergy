#include <iostream>
using namespace std;

int main() {
    int arr[7];
    for (int i = 0; i < 7; i++) {
        cout << "Введите " << i+1 << " элемент массива: ";
        cin >> arr[i];
    }
    cout << "Элементы массива по индексу:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}