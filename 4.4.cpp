#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    int arr[n];
    cout << "Введите элементы: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0], sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }
    cout << "минимум: " << min << endl;
    cout << "максимум: " << max << endl;
    cout << "сумма: " << sum << endl;
    cout << "среднее ариф: " << (float)sum / n << endl;
    return 0;
}