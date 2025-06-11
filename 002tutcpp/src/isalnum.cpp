#include <iostream>
#include <cctype>

int main(){
        char ch = '\0';
        std::cout << "Enter any character: ";
        std::cin.exceptions(std::ios::failbit);
        try{
                std::cin >> ch;
        }
        catch(std::ios_base::failure& e){
                std::cout << "Exception caught: " << e.code() << " " << e.what();
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
