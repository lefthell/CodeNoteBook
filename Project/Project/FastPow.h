#pragma once
#include <iostream>
#include <string>
#include "BaseCode.h"
class FastPow :public BaseCode
{
public:
	FastPow();
	std::string GetName();
	std::string GetDesc();
	void Solution();
	double myPow(double x, int n);
private:
	double MyPow(double x, int n);
    
};

