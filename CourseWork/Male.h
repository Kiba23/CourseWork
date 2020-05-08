#pragma once
#include "CalculatorBase.h"

class Male : public CalculatorBase
{
public:
	int Calculator(int& age, int& height, int& weight) override;
};