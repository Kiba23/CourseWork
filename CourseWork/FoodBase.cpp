#include "FoodBase.h"

FoodBase::FoodBase()
{
    // smth
}

int FoodBase::CalculateCalories()
{
	return 0;
}

void FoodBase::Test()
{
    for (std::vector<std::pair<std::string, int>>::iterator iter = Dishes_Calories.begin();
        iter != Dishes_Calories.end();
        ++iter)
    {
        std::cout << "First: " << iter->first
            << ", Second: " << iter->second << std::endl;
    }
    std::cout << "Size of Vector  >>>>>  " << Dishes_Calories.size();
}

void FoodBase::PrintMenu()
{
    std::cout << this->MenuDishes() << std::endl;
}