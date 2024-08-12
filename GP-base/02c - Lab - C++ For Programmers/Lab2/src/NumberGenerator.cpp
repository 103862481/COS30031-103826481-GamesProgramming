#include "NumberGenerator.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

NumberGenerator::NumberGenerator()
{
	number = 0;

	//Initializes a Random Seed
	srand(time(NULL));
}

NumberGenerator::~NumberGenerator()
{
}

void NumberGenerator::GenerateRandomNumberBetween(int a_min, int a_max)
{
	//Find a range between a_min and a_max
	int numRange = rand() % a_max + a_min;

	number = numRange;
}

int NumberGenerator::IncrementRandomGeneratedNumber(int a_IncrementAmount)
{
	return number += a_IncrementAmount;
}

void NumberGenerator::PrintOddNumbers()
{
	for (int i = 0; i < 20; i++)
	{
		if (i  % 2 == 1 || i % 2 == -1)
		{
			std::cout << i << std::endl;
		}
	}
}

void NumberGenerator::PrintArrayNumbers()
{
	for (int i = 0; i < 5; i++)
	{
		int randNum = rand() % 100 + 1;
		numberArray[i] = randNum;

		std::cout << "Element: " << i << " " << numberArray[i] << std::endl;
	}
}