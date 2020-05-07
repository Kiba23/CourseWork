#include "FoodBase.h"

FoodBase::FoodBase()
{
    // smth
}

int FoodBase::CalculateCalories(std::string dish, int amount)
{
    for (int i = 0; i < Dishes_Calories.size(); i++) {
        if (dish == Dishes_Calories[i].first) {
            SumOfCalories = Dishes_Calories[i].second * amount;
            return SumOfCalories;
        }
    }
}

// Gets and Sets
std::vector<std::pair<std::string, int>> FoodBase::GetDishes_Calories() { return Dishes_Calories; }
void FoodBase::SetDishesCalories(std::vector<std::pair<std::string, int>> Dishes)
{ 
    for (int i = 0; i < Dishes.size(); i++) {
        Dishes_Calories.push_back(std::make_pair(Dishes[i].first, Dishes[i].second));
    }
}

int FoodBase::operator+=(const IFood* obj)
{
    SumOfCalories += obj->SumOfCalories;  // breakpoint
    return SumOfCalories;
}


//void FoodBase::Test()
//{
//    for (std::vector<std::pair<std::string, int>>::iterator iter = Dishes_Calories.begin();
//        iter != Dishes_Calories.end();
//        ++iter)
//    {
//        std::cout << "First: " << iter->first
//            << ", Second: " << iter->second << std::endl;
//    }
//    std::cout << "Size of Vector  >>>>>  " << Dishes_Calories.size();
//}