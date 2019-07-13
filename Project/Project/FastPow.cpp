#include "FastPow.h"

std::string FastPow::GetName()
{
	return  "Pow(x, n)";
}
std::string FastPow::GetDesc()
{
	return "Implement pow(x, n), which calculates x raised to the power n (xn).";
}
void FastPow::Solution()
{
	double a1 = myPow(2.0, 10);
	double a2 = myPow(2.1, 3);
	double a3 = myPow(2.0, -2);
	double a4 = myPow(1.00000, INT32_MIN);
	std::cout << 2.0 << '\t' << 10;
	std::cout << std::endl;
	std::cout << a1;
	std::cout << std::endl;
	std::cout << 2.1 << '\t' << 3;
	std::cout << std::endl;
	std::cout << a2;
	std::cout << std::endl;
	std::cout << 2.0 << '\t' << -2;
	std::cout << std::endl;
	std::cout << a3;
	std::cout << std::endl;
	std::cout << 1.00000 << '\t' << INT32_MIN;
	std::cout << std::endl;
	std::cout << a4;
	std::cout << std::endl;
}
double FastPow::myPow(double x, int n)
{
	if (0.0 == x) return 0.0;

	if (n < 0)
	{
		if (INT32_MIN == n)
		{
			return 1.0 / (myPow(x, -(n + 1))*x);
		}
		else
		{
			return 1.0 / myPow(x, -n);
		}
	}
	else if (0 == n)
	{
		return 1;
	}
	else if (1 == n)
	{
		return x;
	}
	else if (2 == n)
	{
		return x * x;
	}
	else
	{
		double a = myPow(x, n >> 1);
		if (1 == (n & 1))
		{
			return a * a * x;
		}
		else
		{
			return a * a;
		}
	}
}
FastPow::FastPow()
{

}