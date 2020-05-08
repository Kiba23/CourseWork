#include "Meat.h"

Meat::Meat()
{
	SetDishesCalories(Dishes_Meat);
}

void Meat::PrintMenu()
{
	std::cout << "Menu (use amount in grams): ";
	for (int i = 0; i < Dishes_Meat.size(); i++) {
		std::cout << Dishes_Meat[i].first << " ";
	}
	std::cout << std::endl;
}

// Polymorphism
double Meat::CalculateCalories(std::string dish, int amount)
{
	for (int i = 0; i < GetDishes_Calories().size(); i++) {
		if (dish == GetDishes_Calories()[i].first) {
			SumOfCalories = (GetDishes_Calories()[i].second / 100) * amount;
			return SumOfCalories;
		}
	}
}