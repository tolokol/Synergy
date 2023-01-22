#include <iostream>

using namespace std;

//Способ 1: возвращение 
bool isSquare(int number) {
    for (int i = 1; i <= number; i++) {
        if (i * i == number) {
            return true;
        }
    }
    return false;
}

//Способ 2: указатель
void isSquare(int number, bool* result) {
    for (int i = 1; i <= number; i++) {
        if (i * i == number) {
            *result = true;
            return;
        }
    }
    *result = false;
}

//Способ 3: ссылку
void isSquare(int number, bool& result) {
    for (int i = 1; i <= number; i++) {
        if (i * i == number) {
            result = true;
            return;
        }
    }
    result = false;
}

int main() {
    int input1, input2, input3;
    cout << "Введи 3 натурильных числа: ";
    cin >> input1 >> input2 >> input3;
    
    int count = 0;
    //Способ 1
    if (isSquare(input1)) {
        count++;
    }
    if (isSquare(input2)) {
        count++;
    }
    if (isSquare(input3)) {
        count++;
    }
    cout << "Способ 1: " << count << " из входных чисел являются квадратами других натуральных чисел." << endl;
    count = 0;
    
    //Способ 2
    bool result;
    isSquare(input1, &result);
    if (result) {
        count++;
    }
    isSquare(input2, &result);
    if (result) {
        count++;
    }
    isSquare(input3, &result);
    if (result) {
        count++;
    }
    cout << "Способ 2: " << count << " из входных чисел являются квадратами других натуральных чисел." << endl;
    count = 0;
    
    //Способ 3
    isSquare(input1, result);
    if (result) {
        count++;
    }
    isSquare(input2, result);
    if (result) {
        count++;
    }
    isSquare(input3, result);
    if (result) {
        count++;
    }
    cout << "Способ 3: " << count << " из входных чисел являются квадратами других натуральных чисел." << endl;
    
    return 0;
}

