// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int n;
void Sirakys()
{
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else if (n % 2 != 0) {
            n = ((n * 3) + 1) / 2;

        }

    }
    cout << n << endl;
    cout << "Гипотеза подтверждена";
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите натуральное число" << endl;
    cin >> n;
    Sirakys();
}
