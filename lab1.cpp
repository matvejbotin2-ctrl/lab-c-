#include <iostream>
#include <limits>  
#include <iomanip> 
#include <windows.h> 

using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");

    cout << "=========================================================================\n";
    cout << "1. ХАРАКТЕРИСТИКИ ОСНОВНЫХ ТИПОВ ДАННЫХ\n";
    cout << "=========================================================================\n";
    cout << left << setw(22) << "Тип" 
         << setw(35) << "Размер (в байтах)" 
         << setw(30) << "Мин.значение" 
         << setw(25) << "Макс.значение" << "\n";
    cout << "-------------------------------------------------------------------------\n";

    cout << setw(22) << "bool" 
         << setw(20) << sizeof(bool) 
         << setw(25) << numeric_limits<bool>::min() 
         << setw(25) << numeric_limits<bool>::max() << "\n";

    cout << setw(22) << "char" 
         << setw(20) << sizeof(char) 
         << setw(25) << (int)numeric_limits<char>::min() 
         << setw(25) << (int)numeric_limits<char>::max() << "\n";
    
    cout << setw(22) << "signed char" 
         << setw(20) << sizeof(signed char) 
         << setw(25) << (int)numeric_limits<signed char>::min() 
         << setw(25) << (int)numeric_limits<signed char>::max() << "\n";
   
    cout << setw(22) << "unsigned char" 
         << setw(20) << sizeof(unsigned char) 
         << setw(25) << (int)numeric_limits<unsigned char>::min() 
         << setw(25) << (int)numeric_limits<unsigned char>::max() << "\n";

    cout << setw(22) << "short" 
         << setw(20) << sizeof(short) 
         << setw(25) << numeric_limits<short>::min() 
         << setw(25) << numeric_limits<short>::max() << "\n";

    cout << setw(22) << "unsigned short" 
         << setw(20) << sizeof(unsigned short) 
         << setw(25) << numeric_limits<unsigned short>::min() 
         << setw(25) << numeric_limits<unsigned short>::max() << "\n";
         
    cout << setw(22) << "int" 
         << setw(20) << sizeof(int) 
         << setw(25) << numeric_limits<int>::min() 
         << setw(25) << numeric_limits<int>::max() << "\n";

    cout << setw(22) << "unsigned int" 
         << setw(20) << sizeof(unsigned int) 
         << setw(25) << numeric_limits<unsigned int>::min() 
         << setw(25) << numeric_limits<unsigned int>::max() << "\n";

    cout << setw(22) << "long" 
         << setw(20) << sizeof(long) 
         << setw(25) << numeric_limits<long>::lowest() 
         << setw(25) << numeric_limits<long>::max() << "\n";
         
    cout << setw(22) << "unsigned long" 
         << setw(20) << sizeof(unsigned long) 
         << setw(25) << numeric_limits<unsigned long>::lowest() 
         << setw(25) << numeric_limits<unsigned long>::max() << "\n";

    cout << setw(22) << "long long" 
         << setw(20) << sizeof(long long) 
         << setw(25) << numeric_limits<long long>::lowest() 
         << setw(25) << numeric_limits<long long>::max() << "\n";
    
    cout << setw(22) << "unsigned long long" 
         << setw(20) << sizeof(unsigned long long) 
         << setw(25) << numeric_limits<unsigned long long>::lowest() 
         << setw(25) << numeric_limits<unsigned long long>::max() << "\n";

    cout << setw(22) << "float" 
         << setw(20) << sizeof(float) 
         << setw(25) << numeric_limits<float>::lowest() 
         << setw(25) << numeric_limits<float>::max() << "\n";

    cout << setw(22) << "double" 
         << setw(20) << sizeof(double) 
         << setw(25) << numeric_limits<double>::lowest() 
         << setw(25) << numeric_limits<double>::max() << "\n";

    cout << "\n";
    int a,b;
    
    cout << "=========================================================================\n";
    cout << "2. ДЕМОНСТРАЦИЯ ОПЕРАЦИЙ (ПОЛЬЗОВАТЕЛЬСКИЙ ВВОД)\n";
    cout << "=========================================================================\n";
    
    cout << "Введите целое число a: ";
    cin >> a;
    cout << "Введите целое число b (желательно не 0): ";
    cin >> b;
    cout << "-------------------------------------------------------------------------\n";

    bool x = (a > 0); 
    bool y = (b > 0); 

    cout << "[Арифметические операции]:\n";
    cout << "Сложение (a + b):       " << (a + b) << "\n";
    cout << "Вычитание (a - b):      " << (a - b) << "\n";
    cout << "Умножение (a * b):      " << (a * b) << "\n";
    
    if (b != 0) {
        cout << "Деление нацело (a / b): " << (a / b) << " (доля отбрасывается)\n";
        cout << "Деление с остатком: " << ((double)a / b) << "\n";
        cout << "Остаток от деления (a % b): " << (a % b) << "\n";
    } else {
        cout << "Деление нацело (a / b): Ошибка! На ноль делить нельзя.\n";
        cout << "Деление с остатком: Ошибка! На ноль делить нельзя.\n";
        cout << "Остаток от деления (a % b): Ошибка! На ноль делить нельзя.\n";
    }
    cout << "-------------------------------------------------------------------------\n";

    cout << "[Операции сравнения]:\n";
    cout << boolalpha; 
    cout << "Равно (a == b):         " << (a == b) << "\n";
    cout << "Не равно (a != b):      " << (a != b) << "\n";
    cout << "Больше (a > b):         " << (a > b) << "\n";
    cout << "Меньше (a < b):         " << (a < b) << "\n";
    cout << "Больше или равно (a>=b): " << (a >= b) << "\n";
    cout << "Меньше или равно (a<=b): " << (a <= b) << "\n";
    cout << "-------------------------------------------------------------------------\n";

    cout << "[Логические операции] (Условия: x (a > 0) = " << x << ", y (b > 0) = " << y << "):\n";
    cout << "Логическое И (x && y):  " << (x && y) << " (true, если оба числа больше нуля, иначе false)\n";
    cout << "Логическое ИЛИ (x || y): " << (x || y) << " (true, если хотя бы одно число больше нуля, иначе false)\n";
    cout << "Логическое НЕ (!x):      " << (!x) << " (инверсия условия x)\n";
    cout << "=========================================================================\n";
    
    return 0;
}