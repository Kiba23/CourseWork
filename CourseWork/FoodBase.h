#pragma once
#include "IFood.h"

class FoodBase : public IFood
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Calories;		// this is empty

protected:
	FoodBase(std::vector<std::pair<std::string, int>> Dishes) : Dishes_Calories(Dishes) {}	// this isnt working
	//virtual GetKind() = 0;
	//virtual GetDish() = 0;
	virtual std::string MenuDishes() = 0;
	void PrintMenu();

public:
	FoodBase();

	int CalculateCalories() override;

	void Test() override;
};