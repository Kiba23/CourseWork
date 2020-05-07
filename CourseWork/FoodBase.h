#pragma once
#include "IFood.h"

class FoodBase : public IFood
{
private:
	// Vector with dishes of user's kind of food
	std::vector<std::pair<std::string, double>> Dishes_Calories;

protected:
	double SumOfCalories = 0;
	// Calculation calories. All food classes used it, except Meat class (Polymorphism)
	double CalculateCalories(std::string dish, int amount) override;

	//Gets and Sets
	std::vector<std::pair<std::string, double>> GetDishes_Calories();
	void SetDishesCalories(std::vector<std::pair<std::string, int>> Dishes);  // Initializing Dishes_Calories vector
	int GetSumOfCalories() override;

public:
	// Constructor. Does nothing
	FoodBase();

	// Operator overloading for summing calories
	IFood& operator+=(IFood* obj) override;

	// Showing menu depending on kind of food chosed by user (never used)
	void PrintMenu() override;
};