#include "Female.h"

ICalculator& Female::operator-=(ICalculator* obj)
{
	Calories_Left = (10 * obj->GetWeight()) + (6.25 * obj->GetHeight()) - (5 * obj->GetAge()) + 5;
	return *this;
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