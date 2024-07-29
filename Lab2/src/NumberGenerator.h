#pragma once
class NumberGenerator
{
public:

	NumberGenerator();
	~NumberGenerator();

	void GenerateRandomNumberBetween(int a_NumOne, int a_NumTwo);

	int IncrementRandomGeneratedNumber(int a_IncrementAmount);

	void PrintOddNumbers();

	void PrintArrayNumbers();
	
	int number;

private:

	int numberArray[5] = {};
};