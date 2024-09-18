#include <iostream>     
using namespace std;    

int main()             
{         
    setlocale(LC_ALL, "Russian");   // установка кодировки           
    cout << "Переменная - это именованное место в памяти, которое может хранить данные определенного типа.\n" << '\n ';

    cout << "Основные типы данных" << '\n';
    cout << "Целочисленные типы (знаковые):" << '\n';
    cout << "- short // 2 byte / -32768 до 32767" << '\n';
    cout << "- int // 4 byte / -2 147 483 648 до 2 147 483 647" << '\n';
    cout << "- long // 8 byte / -9 223 372 036 854 775 808 до +9 223 372 036 854 775 807" << '\n';

    cout << "Целочисленные типы (беззнаковые):" << '\n';
    cout << "- unsigned short // 2 byte / от 0 до 65535" << '\n';
    cout << "- unsigned int // 4 byte /  от 0 до 4 294 967 295" << '\n';
    cout << "- unsigned long // 8 byte / от 0 до 2^64" << '\n';

    cout << "Вещественнее типы:" << '\n';
    cout << "- float // 4 byte / от 1.175494351E-38 до 3.402823466E+38" << '\n';
    cout << "- double // 8 byte / от  2.2250738585072014E-308 до 1.7976931348623158E+308" << '\n';

    cout << "Символьный тип:" << '\n';
    cout << "- char // 1 byte / от -128 до 127" << '\n';
    // unsigned char sym3 = 'b';    // 1 byte  / 0 до 255

    cout << "Логический тип:" << '\n';
    cout << "- bool // 1 byte / от False (0) до True (1)" << '\n' << '\n';


    cout << "Арифметической операции:" << '\n';
    int a = 11,  b = 5;
    cout << "- Целые числа: a = 11, b = 5" << '\n';
    cout << "   Сложение целых чисел: 11 + 5 = " << a + b << '\n';  // Сумма
    cout << "   Разность целых чисел: 11 - 5 = " << a - b << '\n';  // Вычитание
    cout << "   Умножение целых чисел: 11 * 5 = " << a * b << '\n';  // Умножение
    cout << "   Целочисленное деление: 11 / 5 = " << a / b << '\n';  // Целочисленное деление
    cout << "   Остаток от деления: 11 % 5 = " << a % b << '\n';  // Остаток от деления
    cout << "   Остаток от деления: -11 % 5 = " << -11 % 5 << '\n';  // Остаток от деления

    float x = 5.5f, y = 2.5f;
    cout << "- Числа с плавающей запятой (float): x = 5.5f, y = 2.5f" << '\n';
    cout << "   Сложение: 5.5f + 2.5f = " << x + y << '\n';  // Сумма
    cout << "   Умножение: 5.5f * 2.5f = " << x * y << '\n';  // Умножение
    cout << "   Деление: 5.5f / 2.5f = " << x / y << '\n';  //  Деление

    double m = 10.0, n = 4.0;
    cout << "- Двойная точность (double): m = 10.0, n = 4.0" << '\n';
    cout << "   Деление: 10.0 / 4.0 = " << m / n << '\n';  //  Деление

    char c1 = 'A', c2 = 1; // Увеличим ASCII значение на 1
    cout << "- Символьный тип (char): c1 = 'A', c2 = 1" << '\n';
    cout << "   Сложение (сумма ASCII значений): 'A' + 1 =  " << char(c1 + c2) << '\n'; // Вывод: 'B'

    cout << "- Логический тип (bool): p = true, q = false" << '\n';
    bool p = true, q = false;
    cout << "   Результат логического И (AND): p && q = " <<  (p && q) << '\n'; 
    cout << "   Результат логического ИЛИ (OR): p || q = " <<  (p || q) << '\n'; 
    cout << "   Результат логического НЕ (NOT): !q = " <<  (!q) << '\n'; 


    cout << "это всё." << endl ; 
    return 0;           
}