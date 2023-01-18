#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cout << "введи день рождения: ";
    cin >> day;
    cout << "месяц рождения 1-12: ";
    cin >> month;
    cout << "Введи год рождения: ";
    cin >> year;

    // высокостный гол
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "Высокостный год." << endl;
    } else {
        cout << "Год рождения не высокостный." << endl;
    }

    // Год по китайскому календарю
    int chinese_year = year % 12;
    string chinese_zodiac;
    switch (chinese_year) {
        case 0:
            chinese_zodiac = "Обезьяна";
            break;
        case 1:
            chinese_zodiac = "Петух";
            break;
        case 2:
            chinese_zodiac = "Собака";
            break;
        case 3:
            chinese_zodiac = "Свиньи";
            break;
        case 4:
            chinese_zodiac = "Крыса";
            break;
        case 5:
            chinese_zodiac = "Бык";
            break;
        case 6:
            chinese_zodiac = "Тигр";
            break;
        case 7:
            chinese_zodiac = "Кролик";
            break;
        case 8:
            chinese_zodiac = "Дракон";
            break;
        case 9:
            chinese_zodiac = "Змея";
            break;
        case 10:
            chinese_zodiac = "Лощадь";
            break;
        case 11:
            chinese_zodiac = "Овен";
            break;
    }
    cout << "год рождения по китайскому календарю " << chinese_zodiac << "." << endl;

    // знак зодиака
    string zodiac_sign;
    if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
        zodiac_sign = "Овен";
    } else if ((month == 4 && day >= 21) || (month == 5 && day <= 21)) {
        zodiac_sign = "Телец";
    } else if ((month == 5 && day >= 22) || (month == 6 && day <= 21)) {
        zodiac_sign = "Близнецы";
    } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        zodiac_sign = "Рак";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        zodiac_sign = "Лев";
    } else if ((month == 8 && day >= 22) || (month == 9 && day <= 23)) {
        zodiac_sign = "Дева";
    } else if ((month == 9 && day >= 24) || (month == 10 && day <= 23)) {
        zodiac_sign = "Весы";
        } else if ((month == 10 && day >= 24) || (month == 11 && day <= 22)) {
        zodiac_sign = "Скорпион";
    } else if ((month == 11 && day >= 23) || (month == 12 && day <= 21)) {
        zodiac_sign = "Стрелец";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 20)) {
        zodiac_sign = "Казерог";
    } else if ((month == 1 && day >= 21) || (month == 2 && day <= 19)) {
        zodiac_sign = "Водолей";
    } else if ((month == 2 && day >= 20) || (month == 3 && day <= 20)) {
        zodiac_sign = "Рыбы";
    }
    cout << "Знак задиака по дате рождения " << zodiac_sign << "." << endl;

    return 0;
}