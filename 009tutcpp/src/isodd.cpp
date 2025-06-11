#include <iostream>

const bool isOdd(const int inum){
	return static_cast<const bool> (inum % 2);
}

int main() {
	int inum = 0;
	if ( !(std::cin >> inum) )
		return -1;
	std::cout << "Is the number odd?" << std::endl
	<< std::boolalpha << isOdd(static_cast<const int>(inum)) << std::endl;
	return 0;
}
