#pragma once
#include "FoodBase.h"

class Meat : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Meat = { {"Beef", 248}, {"Chicken breast", 172},
		{"Chicken drumstick", 185}, {"Chicken leg", 174}, {"Chicken wing", 266}, {"Chuck steak", 277},
		{"Duck", 337}, {"Filet mignon", 267}, {"Ham", 163}, {"Pork", 196}, {"Turkey breast", 135},
		{"Turkey leg", 208}, {"Turkey steak", 189}, {"Turkey wing", 221} }; /* per 100g */ // mb do per 1g
public:
	// Default constructor, it redirect Meat vector to FoodBase
	Meat();

	// Showing menu of dishes
	void PrintMenu() override;

	// Polymorphism, because Meat uses another formula to calculate calories
	int CalculateCalories(std::string dish, int amount) override;
};