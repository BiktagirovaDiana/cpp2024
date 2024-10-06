// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::oct;
using std::hex;



int DecimalNumber = 0;
int OctalNumber = 0;
int HexadecimalNumber = 0;



int main() {

	setlocale(LC_ALL, "Russian");
	cout << "Введите десятичное число" << endl;
	cin >> DecimalNumber;
	cout << oct <<"в восьмеричной системе:" << DecimalNumber << endl;
	cout << hex <<"в шестнадцатеричная система:" << DecimalNumber << endl;
	return 0; 

}