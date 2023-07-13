#include <iostream>
#include <cmath>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "divizion.h"
#include "exponentiation.h"

int main() {
	setlocale(LC_ALL, "rus");
	double a;
	double b;
	int x = 0;

	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> x;

	switch (x) {
	case 1:
		std::cout << a << " + " << b << " = " << addition(a, b) << std::endl;
		break;
	case 2:
		std::cout << a << " - " << b << " = " << subtraction(a, b) << std::endl;
		break;
	case 3:
		std::cout << a << " * " << b << " = " << multiplication(a, b) << std::endl;
		break;
	case 4:
		std::cout << a << " : " << b << " = " << divizion(a, b) << std::endl;
		break;
	case 5:
		std::cout << a << " в степени " << b << " = " << exponentiation(a, b) << std::endl;
		break;
	default:
		break;
	}
}



/*
Задача 1. Математические функции
В этом задании вы вынесете математические функции в отдельный файл.

Даны следующие математически функции : сложение, вычитание, умножение, деление, возведение в степень.

Вам нужно разместить их в отдельном файле исходного кода и воспользоваться ими из функции main.

Попросите пользователя ввести два числа и выбрать операцию.Выведите результат ему на консоль.

Пример работы программы
Консоль
Введите первое число : 20
Введите второе число : 2
Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : 5
20 в степени 2 = 400
*/