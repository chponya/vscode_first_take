#include <iostream>    
using namespace std; 

int main()             
{          
    setlocale(LC_ALL, "Russian");   // установка кодировки               
    cout << "3 вариант." << '\n';
    short a, b;
    cout << "Введите A: ";
    cin >> a;
    cout << "Введите B: ";
    cin >> b;
    short p = (a + b) * 2;
    cout << "Периметр треугольника = " << p << '\n';

    return 0;          
}                      