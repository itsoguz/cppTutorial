#include <iostream>
#include <vector>
#include <limits>

template <typename It> // i.e. std::list<double>::iterator
typename std::iterator_traits<It>::value_type recSumContainer(It begin, It end){ // i.e. value_type double
	if ( begin == end )
		return 0;
	else
		return *begin + recSumContainer(++begin, end); // sum the container through iterators recursively
}

int main() {
	std::vector<double> vec;
	double dnum = 0.0;
	
	std::cout << "Input numbers to be summed. Press Ctrl+Z (Windows), Ctrl+D (Linux/MacOS) once done."
	<< std::endl;
	while (std::cin >> dnum)
		vec.push_back(dnum);
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	double dsum = recSumContainer(vec.begin(), vec.end());
	std::cout << "Sum is: " << dsum << std::endl;
	
	return 0;
}
