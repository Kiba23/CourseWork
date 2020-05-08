#pragma once
#include "CalculatorBase.h"
#include "Male.h"

class Female : public CalculatorBase
{
public:
	int Calculator(int& age, int& height, int& weight) override;
};