#include <iostream>
#include <cmath>
#include "math.h"


int main() {
	setlocale(0, "rus");
	double a;
	double b;
	int x = 0;

	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	std::cin >> x;
	double pow = std::pow(a, b);
	calculation(a, b, pow, x);
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