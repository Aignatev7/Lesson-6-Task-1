#include "math.h"
#include <iostream>

void calculation(double a, double b, double pow, int x) {
	switch (x) {
	case 1:
		std::cout << a << " + " << b << " = " << a + b << std::endl;
		break;
	case 2:
		std::cout << a << " - " << b << " = " << a - b << std::endl;
		break;
	case 3:
		std::cout << a << " * " << b << " = " << a * b << std::endl;
		break;
	case 4:
		std::cout << a << " : " << b << " = " << a / b << std::endl;
		break;
	case 5:
		std::cout << a << " в степени " << b << " = " << pow << std::endl;
		break;
	default:
		break;
	}
}