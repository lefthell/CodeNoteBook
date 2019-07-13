#pragma once
#include <iostream>
#include <string>
#include "BaseCode.h"
class  PrintQuestion
{
public:
	void Print(BaseCode  &bc) const
	{
		std::cout << bc.GetName() << std::endl;
		std::cout << bc.GetDesc() << std::endl;
		bc.Solution();
	}
};

