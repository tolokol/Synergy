#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;
    int* arr = new int[n]; // динамич массив
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0], max = arr[0], sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    cout << "минимальное значение: " << min << endl;
    cout << "максимальное значение: " << max << endl;
    cout << "сумма: " << sum << endl;
    cout << "среднее: " << (double)sum/n << endl;

    delete[] arr;
    return 0;
}