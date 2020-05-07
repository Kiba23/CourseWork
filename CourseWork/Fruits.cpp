#include "Fruits.h"

Fruits::Fruits()
{
	SetDishesCalories(Dishes_Fruits);
}

void Fruits::PrintMenu()
{
	std::cout << "Menu (use amount in number of fruits): ";
	for (int i = 0; i < Dishes_Fruits.size(); i++) {
		std::cout << Dishes_Fruits[i].first << " ";
	}
	std::cout << std::endl;
}