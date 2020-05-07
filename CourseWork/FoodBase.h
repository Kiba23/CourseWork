#pragma once
#include "IFood.h"

class FoodBase : public IFood
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Calories;
	int SumOfCalories = 0;

protected:
	int CalculateCalories(std::string dish, int amount) override;

public:
	// use in future
	FoodBase();

	//Gets and Sets
	std::vector<std::pair<std::string, int>> GetDishes_Calories();
	void SetDishesCalories(std::vector<std::pair<std::string, int>> Dishes);  // Initializing Dishes_Calories vector

	int operator+=(const IFood* obj) override;

	//void Test() override;
};