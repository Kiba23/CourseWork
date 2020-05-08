#pragma once
#include "ICalculator.h"

class CalculatorBase : public ICalculator
{
private:
	int Age = 0;
	int Height = 0;
	int Weight = 0;

protected:
	int Calories_Left;

public:
	// Selecting and then returning gender chosen by user
	ICalculator* SelectGender(std::string& gender) override;

	// Setting data from user
	void SetData(int age, int height, int weight) override;

	// Gets
	int GetAge() override;
	int GetHeight() override;
	int GetWeight() override;
	int GetCalories_Left() override;
};