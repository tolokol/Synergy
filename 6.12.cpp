#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char str[] = "Hello";
    int n = sizeof(str) / sizeof(str[0]); // определяем размер массива

    // Выводим последний элемент строки
    cout << "Последним элементом строки: " << str[n-2] << endl;

    // Меняем местами два элемента строки
    swap(str[1], str[3]);

    cout << "Измененная строка " << str << endl;

    return 0;
}
