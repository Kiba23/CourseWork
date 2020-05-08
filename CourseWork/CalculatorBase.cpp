#include "CalculatorBase.h"

void CalculatorBase::SetData(int age, int height, int weight) 
{ 
	Age = age; Height = height; Weight = weight; 
}

// Gets
int CalculatorBase::GetAge() { return Age; }
int CalculatorBase::GetHeight() { return Height; }
int CalculatorBase::GetWeight() { return Weight; }
int CalculatorBase::GetCalories_Left() { return Calories_Left; }