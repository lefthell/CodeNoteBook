#pragma once
#include <iostream>
#include <string>
class  BaseCode
{
public:
	virtual std::string GetName();
	virtual std::string GetDesc();
	virtual void Solution();
	BaseCode();
	~BaseCode();

private:

};

