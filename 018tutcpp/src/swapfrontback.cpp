#include <iostream>

int main() {
	std::cout << "Input a character sequence:" << std::endl;
	std::string s = "";
	if ( !(std::cin >> s) )
		return -1;

	std::string stemp (s);
	s.front() = s.back();
	s.back() = stemp.front();
	
	std::cout << "After swapping first and last characters: " << s << std::endl;
	
	return 0;
}
