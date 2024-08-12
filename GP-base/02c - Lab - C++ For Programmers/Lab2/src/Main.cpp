#include <iostream>

#include "NumberGenerator.h"

int main()
{
	NumberGenerator* numGen = new NumberGenerator();

	numGen->GenerateRandomNumberBetween(1, 500);

	std::cout << numGen->number << std::endl;

	std::cout << numGen->IncrementRandomGeneratedNumber(1) << std::endl;
	
	numGen->PrintOddNumbers();

	numGen->PrintArrayNumbers();

	std::cout << "This has spaces in it?" << std::endl;
	
	return 0;
}