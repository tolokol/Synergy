#include <iostream>
using namespace std;

int main() {
    int input;
    while (true) {
        cout << "веди число: ";
        cin >> input;
        if (input == 7) {
            break;
        }
        if (input > 7) {
            cout << "Число больше 7" << endl;
        } else {
            cout << "Число меньше 7" << endl;
        }
        if (input > 10) {
            cout << "Число больше 10" << endl;
        } else if (input == 10) {
            cout << "Число равно 10" << endl;
        } else {
            cout << "Число меньше 10" << endl;
        }
        if (input % 2 == 0) {
            cout << "можно поделить на 2" << endl;
        } else {
            cout << "нельзя делить на 2" << endl;
        }
        if (input % 3 == 0) {
            cout << "можно поделить на 3" << endl;
        } else {
            cout << "нельзя делить на 3" << endl;
        }
    }
    cout << "Вели число равное 7 ." << endl;
    return 0;
}
