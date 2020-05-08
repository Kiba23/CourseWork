#include "Male.h"

int Male::Calculator(int& age, int& height, int& weight)
{
	return (10 * weight) + (6.25 * height) - (5 * age) + 5;
}