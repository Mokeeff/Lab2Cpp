#pragma once
#include "stdafx.h"
#include <string>
using namespace std;

float toFloat(std::string valInt) {
	float valueInt = 0;
	valueInt = atof(valInt.c_str());
	return valueInt;
}

class Calculator {
public:
	void Sum(float &num1, float &num2) {
		float S;
		S = num1 + num2;
		cout << "Сумма ваших чисел = " << S << endl;
	}
};

class Fraction {
public:
	float num1f, num2f;
	string num1, num2;

	void Input(string M, string &N) {
		num1.clear();
		cout << M << endl;
		string Sim = " ";
		while (true){
			cin >> N;
			for (int i = 0; i < N.length(); i++) {
				if (N.at(i) == Sim.at(0)) {
					N.erase(i, 1);
				}
			}
			if (cin.peek() == '\n' && NumTrue(N) == true) {
				cin.get();
				break;
			}
			else {
				cout << "Ошибка ввода. Повторите : ";
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}
	}

	bool NumTrue(string Num) {
		int i = 0, dot = 0;
		string Sim = "0123456789-.,";
		if (Num.at(0) != Sim.at(1) && Num.at(0) != Sim.at(2) && Num.at(0) != Sim.at(3) &&
			Num.at(0) != Sim.at(4) && Num.at(0) != Sim.at(5) && Num.at(0) != Sim.at(6) &&
			Num.at(0) != Sim.at(7) && Num.at(0) != Sim.at(8) && Num.at(0) != Sim.at(9) &&
			Num.at(0) != Sim.at(0) && Num.at(0) != Sim.at(10)) {
 			return false;
		}
		if (Num.at(Num.length() - 1) != Sim.at(1) && Num.at(Num.length() - 1) != Sim.at(2) && Num.at(Num.length() - 1) != Sim.at(3) &&
			Num.at(Num.length() - 1) != Sim.at(4) && Num.at(Num.length() - 1) != Sim.at(5) && Num.at(Num.length() - 1) != Sim.at(6) &&
			Num.at(Num.length() - 1) != Sim.at(7) && Num.at(Num.length() - 1) != Sim.at(8) && Num.at(Num.length() - 1) != Sim.at(9) &&
			Num.at(Num.length() - 1) != Sim.at(0)) {
			return false;
		}
		for (i = 0; i < Num.length(); i++) {
			if (Num.at(i) == Sim.at(11) || Num.at(i) == Sim.at(12)) {
				dot++;
				if (dot > 1) {
					return false;
				}
			}
			if (Num.at(i) != Sim.at(1) && Num.at(i) != Sim.at(2) && Num.at(i) != Sim.at(3) &&
				Num.at(i) != Sim.at(4) && Num.at(i) != Sim.at(5) && Num.at(i) != Sim.at(6) &&
				Num.at(i) != Sim.at(7) && Num.at(i) != Sim.at(8) && Num.at(i) != Sim.at(9) &&
				Num.at(i) != Sim.at(0) && Num.at(i) != Sim.at(10) && Num.at(i) != Sim.at(11) &&
				Num.at(i) != Sim.at(12)) {
				return false;
			}
		}
		return true;
	}

	void Fract() {
		string Sim = ",.";
		for (int i = 0; i < num1.length(); i++) {
			if (num1.at(i) == Sim.at(0) || num1.at(i) == Sim.at(1)) {
				num1.at(i) = Sim.at(1);
			}
		}
		for (int i = 0; i < num2.length(); i++) {
			if (num2.at(i) == Sim.at(0) || num2.at(i) == Sim.at(1)) {
				num2.at(i) = Sim.at(1);
			}
		}
		num1f = toFloat(num1);
		num2f = toFloat(num2);
	}

	void Display(string M, float &N) {
		cout << M << N << endl;
	}
};