#pragma once
#include <iostream>
#include <string>

class ICalculator
{
public:
	virtual ICalculator* SelectGender(std::string& gender) = 0;
	virtual void SetData(int age, int height, int weight) = 0;
	virtual ICalculator& operator-=(ICalculator* obj) = 0;

	// Gets
	virtual int GetAge() = 0;
	virtual int GetHeight() = 0;
	virtual int GetWeight() = 0;
	virtual int GetCalories_Left() = 0;
};