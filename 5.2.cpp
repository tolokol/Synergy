#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> columns;

    int **array = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Введите элемент для строки" << i << " и колонка " << j << ": ";
            cin >> array[i][j];
        }
    }

    cout << "Введенный массив является: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}