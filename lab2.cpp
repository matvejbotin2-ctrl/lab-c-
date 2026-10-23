#include <iostream>
#include <cmath>    
#include <windows.h> 

using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF8");

    int step;
    do {
        cout << "\n======================================================\n";
        cout << " УСЛОВИЯ И ЦИКЛЫ\n";
        cout << "======================================================\n";
        cout << "1. Поиск мин. и макс. числа в последовательности\n";
        cout << "2. Определение простоты числа\n";
        cout << "3. Распаковка натурального числа (вывод цифр)\n";
        cout << "0. Выход из программы\n";
        cout << "------------------------------------------------------\n";
        cout << "Выберите пункт меню: ";
        cin >> step;
        cout << "------------------------------------------------------\n";

        switch (step) {
            case 1: {
                int n;
                cout << "[Поиск мин/макс]. Сколько чисел вы хотите ввести? ";
                cin >> n;

                if (n <= 0) {
                    cout << "Ошибка: количество чисел должно быть больше 0.\n";
                    break;
                }

                int number;
                cout << "Введите число 1: ";
                cin >> number;

                int min_num = number;
                int max_num = number;

                for (int i = 2; i <= n; i++) {
                    cout << "Введите число " << i << ": ";
                    cin >> number;

                    if (number < min_num) min_num = number; 
                    if (number > max_num) max_num = number; 
                }

                cout << "\nРезультат:\n";
                cout << "Минимальное число: " << min_num << "\n";
                cout << "Максимальное число: " << max_num << "\n";
                break;
            }

            case 2: {
                int num;
                cout << "[Простота числа]. Введите целое число: ";
                cin >> num;

                if (num <= 1) {
                    cout << "Число " << num << " не является ни простым, ни составным.\n";
                    break;
                }

                bool is_prime = true; 

                for (int i = 2; i <= sqrt(num); i++) {
                    if (num % i == 0) {
                        is_prime = false;
                        break;            
                    }
                }

                if (is_prime) {
                    cout << "Результат: Число " << num << " — ПРΟСТОЕ.\n";
                } else {
                    cout << "Результат: Число " << num << " — СОСТАВНОЕ.\n";
                }
                break;
            }

            case 3: {
                long long num;
                cout << "[Распаковка]. Введите натуральное число: ";
                cin >> num;

                if (num <= 0) {
                    cout << "Ошибка: число должно быть натуральным (больше 0).\n";
                    break;
                }

                cout << "Цифры числа в обратном порядке (с конца): ";
                long long temp = num;
                
                while (temp > 0) {
                    int digit = temp % 10; 
                    cout << digit << " ";
                    temp /= 10;            
                }
                cout << "\n";
                break;
            }

            case 0:
                cout << "Программа завершена. До свидания!\n";
                break;

            default:
                cout << "Неверный пункт меню. Попробуйте еще раз.\n";
                break;
        }

    } while (step != 0);

    return 0;
}
