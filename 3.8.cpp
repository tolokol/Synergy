#include <iostream>
using namespace std;

int main() {
    int n, input, min, max, sum = 0;
    double avg;
    cout << "ведите количество элементов: ";
    cin >> n;
    cout << "Введите элемент 1: ";
    cin >> input;
    min = input;
    max = input;
    sum += input;
    for (int i = 1; i < n; i++) {
        cout << "ведите элемент " << i+1 << ": ";
        cin >> input;
        if (input > max) {
            max = input;
        }
        if (input < min) {
            min = input;
        }
        sum += input;
    }
    avg = (double)sum / n;
    cout << "минимум: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "сумма: " << sum << endl;
    cout << "Среднее значение: " << avg << endl;
    return 0;
}