#include <iostream>

int main(int argc, char * argv[])
{
	// this is for testing a branch
	int a = 1;
	int b = 2;

	// second add in test branch
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

	// goodbye by test branch
	return 0;
}

