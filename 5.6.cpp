#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n, m;
cout << "Введите количество строк и столбцов массива: ";
cin >> n >> m;

int arr[n][m];

cout << "Введите элементы массива: " << endl;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
    }
}


for (int i = 0; i < n; i++) {
    sort(arr[i], arr[i] + m); 
}

cout << "Отсортированный массив: " << endl;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

for(int i = 0; i < n; i++) {
    swap(arr[i][0], arr[i][m-1]);
}
cout << "Массив после замены первого и последнего столбцов: " << endl;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
return 0;

}