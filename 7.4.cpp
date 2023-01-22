#include <iostream>
using namespace std;

string replaceFirstLast(string input, char symbol) {
    input[0] = symbol;
    input[input.length() - 1] = symbol;
    return input;
}

int main() {
    string inputString;
    char symbol;
    cout << "Введи слово: ";
    cin >> inputString;
    cout << "Введите символ: ";
    cin >> symbol;
    cout << "Новое слово: " << replaceFirstLast(inputString, symbol) << endl;
    return 0;
}