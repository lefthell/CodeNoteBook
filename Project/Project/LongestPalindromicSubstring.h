#pragma once
#include <iostream>
#include <string>
#include "BaseCode.h"

class LongestPalindromicSubstring:public BaseCode
{
public:
	LongestPalindromicSubstring();
	std::string GetName();
	std::string GetDesc();
	void Solution();

private:
	int expandAroundCenter(std::string s, int left, int right);
	std::string longestPalindrome(std::string s);
};