// Lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "CalcAndFrac.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");
	char k = '0';
	Fraction f;
	Calculator c;
	f.Input("Введите первое число: ", f.num1);
	f.Input("Введите второе число: ", f.num2);
	while (k != '8')
	{
		f.Fract();
		cout << "1.Изменить 1 число" << endl;
		cout << "2.Изменить 2 число" << endl;
		cout << "3.Посчитать сумму чисел" << endl;
		cout << "4.Посчитать разность чисел" << endl;
		cout << "5.Посчитать произведение чисел" << endl;
		cout << "6.Посчитать частное чисел" << endl;
		cout << "7.Показать числа" << endl;
		cout << "8.Выход" << endl;
		cout << "Введите число из предоставленного выше списка: " << endl;
		cin >> k;
		switch (k)
		{
		case '1':
			system("cls");
			f.Input("Введите первое число: ", f.num1);
			break;
		case '2':
			system("cls");
			f.Input("Введите второе число: ", f.num2);
			break;
		case '3':
			system("cls");
			c.Sum(f.num1f, f.num2f);
			break;
		case '4':
			system("cls");

			break;
		case '5':
			system("cls");

			break;
		case '6':
			system("cls");

			break;
		case '7':
			system("cls");
			f.Display("Первое число: ", f.num1f);
			f.Display("Второе число: ", f.num2f);
			break;
		default:
			system("cls");
			cout << "Такого пункта не существует" << endl;
			break;
		}
	}
	return 0;
}