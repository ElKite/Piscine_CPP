
#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int>		a(5);
	std::cout << "[a]" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		a[i] = i;
		std::cout << i << " : " << a[i] << std::endl;
	}

	Array<int> b = a;
	std::cout << "[b]" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		b[i] = i;
		std::cout << i << " : " << b[i] << std::endl;
	}


	std::cout << "try out of bound exception" << std::endl;
	try {
		for (int i = 0; i < 6; i++)
		{
			b[i] = i;
			std::cout << i << " : " << b[i] << std::endl;
		}
	} catch (std::exception e) {
		std::cout << "catched exception" << std::endl;
	}
	return 0;
}