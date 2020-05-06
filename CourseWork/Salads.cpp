#include "Salads.h"

Salads::Salads()
{
	SetDishesCalories(Dishes_Salads);
}

void Salads::PrintMenu()
{
	std::cout << "Menu: ";
	for (int i = 0; i < Dishes_Salads.size(); i++) {
		std::cout << Dishes_Salads[i].first << " ";
	}
	std::cout << std::endl;
}