#include "IFood.h"
#include "FoodBase.h"
#include "Menu.h"
//#include "Meat.h"
//#include "Fruits.h"
//#include "Vegetables.h"
//#include "Soups.h"
//#include "Salads.h"
//#include "Beverages.h"

/*                      NOTES
    Bug: Problem with summing all calories (operator
        overloading).
    To do: Polymorphism, Initialize all products,
        Calculate normal amount calories of each person.
    Possibilities to improve: If user's dish wasn't 
        found he cand declare it by himself and also 
        input amount of calories.
*/

void Introduction() 
{
    std::cout << "<<< Calories Calculator >>>" << std::endl << std::endl;
    std::cout << "How many dishes do you want to calculate?" << std::endl;
    std::cout << "---" << std::endl;
}

int main()
{
    // Interface of the program
    Introduction();     
    int steps;
    std::cin >> steps;

    for (int i = 0; i < steps; i++) {
        std::string kind_of_food;
        std::string dish;
        int amount;

        Menu* menu = new Menu;
        std::cin >> kind_of_food;
        menu->SelectKindOfFood(kind_of_food);
        std::cin >> dish >> amount;


        IFood* food = menu->GetObjOfFood();
        food->PrintMenu();      // what to do with this


        //IFood* test = new FoodBase;
        //test->Test();
        

        //IFood* food;
        //food->GetDish(dish, amount);
        //food->CalculateCalories();
        
        //IFood* base = new Meat();
        //base->GetDish(); // do whatever

        // End of the program
        std::cout << "---" << std::endl;                    // End of the cycle
    }

    return 0;
}