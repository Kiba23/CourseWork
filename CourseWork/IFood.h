#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <utility>

class IFood	
{
public:						
	virtual double CalculateCalories(std::string& dish, int& amount) = 0;
	virtual void PrintMenu() = 0;
	virtual IFood& operator+=(IFood* obj) = 0;

	// Gets and Sets
	virtual std::vector<std::pair<std::string, double>> GetDishes_Calories() = 0;
	virtual void SetDishesCalories(std::vector<std::pair<std::string, int>>& Dishes) = 0;
	virtual int GetSumOfCalories() = 0;
};