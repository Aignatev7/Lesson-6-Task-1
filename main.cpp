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

	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
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
		std::cout << a << " � ������� " << b << " = " << exponentiation(a, b) << std::endl;
		break;
	default:
		break;
	}
}



/*
������ 1. �������������� �������
� ���� ������� �� �������� �������������� ������� � ��������� ����.

���� ��������� ������������� ������� : ��������, ���������, ���������, �������, ���������� � �������.

��� ����� ���������� �� � ��������� ����� ��������� ���� � ��������������� ��� �� ������� main.

��������� ������������ ������ ��� ����� � ������� ��������.�������� ��������� ��� �� �������.

������ ������ ���������
�������
������� ������ ����� : 20
������� ������ ����� : 2
�������� ��������(1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������) : 5
20 � ������� 2 = 400
*/