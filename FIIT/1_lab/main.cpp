#include <iostream>     
using namespace std;    

int main()             
{         
    setlocale(LC_ALL, "Russian");   // установка кодировки           
    cout << "Переменная - это именованное место в памяти, которое может хранить данные определенного типа." << '\n'; 
// Типы данных
    // Целочисленные типы (знаковые)
    short num1 = 1; // 2 byte  / –32768 до 32767
    int num2 = 2;   // 4 byte  / −2 147 483 648 до 2 147 483 647
    long num3 = 3;  // 8 byte  / −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807

    // Целочисленные типы (беззнаковые)
    unsigned short num4 = 1;   // 2 byte  / 0 до 65535
    unsigned int num5 = 2;     // 4 byte  /  от 0 до 4 294 967 295
    unsigned long num6 = 3;    // 8 byte  / от 0 до 2^64

    // Числа с точкой (вещественные)
    float num7 = 4;     // 4 byte  / от +/- 3.4E-38 до 3.4E+38
    double num8 = 4;    // 8 byte  / от  +/- 1.7E-308 до 1.7E+308

    // Символьный тип
    char sym1 = 'a';    // 1 byte  / -128 до 127
    // signed char sym2 = 'a';    // 1 byte  / -128 до 127
    // unsigned char sym3 = 'b';    // 1 byte  / 0 до 255

    // Логический тип
    bool isTrue = true;    // 1 byte / False (0) или True (1)

    cout << "это всё." << endl ; 
    return 0;           
}                       