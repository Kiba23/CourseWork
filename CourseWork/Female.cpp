#include "Female.h"

int Female::Calculator(int& age, int& height, int& weight)
{
	return (10 * weight) + (6.25 * height) - (5 * age) - 161;
}

ICalculator* CalculatorBase::SelectGender(std::string& gender)
{
	if (gender == "male" || "Male") {
		ICalculator* male = new Male();
		return male;
	}
	else if (gender == "female" || "Female") {
		ICalculator* female = new Female();
		return female;
	}
}