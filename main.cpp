#include <iostream>

int main(int argc, char * argv[])
{
	// adding a comment again
	int a = 1;
	int b = 2;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << rba << std::endl;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;

	// changed 1 line (1 add + 1 rem)
	const int SUM = a + b;
	std::cout << "a + b: " << SUM << std::endl;

	// adding more lines in master
	const int DIFF = a - b;
	std::cout << "a - b: " << SUM << std::endl;
	
	// this is the comment in special

	// this is a change that should only be in master

	return 0;
}

