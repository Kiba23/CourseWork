#pragma once
#include <iostream>
#include <string>

class ICalculator
{
public:
	virtual ICalculator* SelectGender(std::string& gender) = 0; // REMARK BY TEACHER - this function should be for Base class. The problem here is that Male and Female class has access to this fucntion
	virtual void SetData(int age, int height, int weight) = 0;
	virtual ICalculator& operator-=(ICalculator* obj) = 0; // REMARK BY TEACHER - operator overload shouldn't be in Interface

	// Gets
	virtual int GetAge() = 0;
	virtual int GetHeight() = 0;
	virtual int GetWeight() = 0;
	virtual int GetCalories_Left() = 0;
};