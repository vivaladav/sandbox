#include <iostream>

int main(int argc, char * argv[])
{
	int a = 1;
	int b = 2;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << rba << std::endl;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;

	// changed 1 line (1 add + 1 rem)
	const int SUM = a + b;
	std::cout << "a + b: " << SUM << std::endl;

	return 0;
}

