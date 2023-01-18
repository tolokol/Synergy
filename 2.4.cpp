#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "введи число от 1 до 7: ";
    cin >> input;

    switch (input) {
        case 1:
            cout << "Понедельник" << endl;
            break;
        case 2:
            cout << "Вторник" << endl;
            break;
        case 3:
            cout << "Среда" << endl;
            break;
        case 4:
            cout << "Четверг" << endl;
            break;
        case 5:
            cout << "пятница" << endl;
            break;
        case 6:
            cout << "суббота" << endl;
            break;
        case 7:
            cout << "воскресенье" << endl;
            break;
        default:
            cout << "Error" << endl;
    }
    return 0;
}
