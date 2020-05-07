#include "Beverages.h"

Beverages::Beverages()
{
	SetDishesCalories(Dishes_Beverages);
}

void Beverages::PrintMenu()
{
	std::cout << "Menu (use amount in cup): ";
	for (int i = 0; i < Dishes_Beverages.size(); i++) {
		std::cout << Dishes_Beverages[i].first << " ";
	}
	std::cout << std::endl;
}