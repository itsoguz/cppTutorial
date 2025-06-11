#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cout << "Enter a string:" << std::endl;
	if ( !(std::getline(std::cin, str)) ){
		std::cout << "Runtime error: input stream on fail state.";
		return -1;
	}
	
	std::string revstr(str.rbegin(), str.rend());
	std::cout << "String: " << str << std::endl;
	std::cout << "Reverse string: " << revstr << std::endl;
	return 0;
}
