#pragma once
#include <iostream>
#include <string>

class ICalculator
{
public:
	virtual int Calculator(int& age, int& height, int& weight) = 0;
	virtual ICalculator* SelectGender(std::string& gender) = 0;
};