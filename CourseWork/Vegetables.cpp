#include "Vegetables.h"

Vegetables::Vegetables()
{
	SetDishesCalories(Dishes_Vegetables);
}

void Vegetables::PrintMenu()
{
	std::cout << "Menu (use amount in number of vegetables): ";
	for (int i = 0; i < Dishes_Vegetables.size(); i++) {
		std::cout << Dishes_Vegetables[i].first << " ";
	}
	std::cout << std::endl;
}