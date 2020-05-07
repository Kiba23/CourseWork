#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <utility>

class IFood	
{
public:						
	virtual double CalculateCalories(std::string dish, int amount) = 0;
	virtual void PrintMenu() = 0;
	virtual int GetSumOfCalories() = 0;
	virtual IFood& operator+=(IFood* obj) = 0;
};