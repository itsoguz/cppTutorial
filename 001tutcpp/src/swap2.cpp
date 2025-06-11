#include <iostream>

int main(){
	double x = 3.5;
	double y = -5.1;
	double temp = 0.0;

	std::cout << "Before swapping numbers:" << std::endl;
	std::cout << "x = " << x << ", y = " << y << std::endl;

	temp = x;
	x = y;
	y = temp;

	std::cout << "After swapping numbers:" << std::endl;
	std::cout << "x = " << x << ", y = " << y << std::endl;

	return 0;
}
