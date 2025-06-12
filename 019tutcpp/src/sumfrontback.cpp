#include <iostream>
#include <cmath>

int main() {
	std::cout << "Input an integer number:" << std::endl;
	int inum = 0;
	if ( !(std::cin >> inum) )
		return -1;

	const int lastdig = inum % 10;
	
	while ( std::abs(inum) > 9 )
		inum = inum / 10;
	
	const int firstdig = inum;
	std::cout << "The sum of first and last digits: " << firstdig + lastdig << std::endl;
	
	return 0;
}
