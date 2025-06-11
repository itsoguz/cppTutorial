#include <iostream>
#include <cctype>

int main(){
        char ch = '\0';
        std::cout << "Enter any character:" << std::endl;
                if( !(std::cin >> ch) ){
                	std::cout << "Runtime error: Input stream is on fail state.";
                	return -1;
                }
                
	if(isdigit(ch))
		std::cout << ch << " is a digit." << std::endl;
	else if(isalpha(ch))
		std::cout << ch << " is an alphabet" << std::endl;
	else
		std::cout << ch << " is a control character" << std::endl;
		
	return 0;
}
