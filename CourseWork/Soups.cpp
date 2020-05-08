#include "Soups.h"

Soups::Soups()
{
	SetDishesCalories(Dishes_Soups);
}

void Soups::PrintMenu()
{
	std::cout << "Menu (use amount in number of cup served): ";
	for (int i = 0; i < Dishes_Soups.size(); i++) {
		std::cout << Dishes_Soups[i].first << " ";
	}
	std::cout << std::endl;
}