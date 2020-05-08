#include "Male.h"

ICalculator& Male::operator-=(ICalculator* obj)
{
	Calories_Left = (10 * obj->GetWeight()) + (6.25 * obj->GetHeight()) - (5 * obj->GetAge()) + 5;
	return *this;
}