#include <iostream>
#include <cmath>

int main() {
    int date, day, month, year, century_year, century;

    std::cout << "Введите число месяца:" << std::endl;
    std::cin >> date; // 5
    std::cout << "Введите номер месяца:" << std::endl;
    std::cin >> month; // 10
    std::cout << "Введите год:" << std::endl;
    std::cin >> year; // 2026

    century_year = (year%100); // 26
    century = (year/100); // 20

    day=((date+((13*month-1)/5)+(century_year/4)+(century/4)-2*century)-1)%7;
    // day = (((5+(13*10-1)/5)+(26/4)+(20/4)-(2*20+777))-1)%7=((5+25+6+5-817)-1)%7=(-776)%7=1

    char *days[] = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};

    std::cout << days[day] << std::endl;

    return 0;
}
