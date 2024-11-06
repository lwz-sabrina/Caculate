#include "CaculateData.h"
#include <iostream>

CaculateData::CaculateData()
{
}

CaculateData::~CaculateData()
{
}

int Add(int numberA, int numberB)
{
	return numberA + numberB;
}

int Subtract(int numberA, int numberB)
{
	return numberA - numberB;
}

int Multiplication(int numberA, int numberB)
{
	return numberA * numberB;
}

int Divided(int numberA, int numberB)
{
	if (numberB == 0) {
		std::cout << "除数不能为空" << std::endl;
	}
	return numberA / numberB;
}
