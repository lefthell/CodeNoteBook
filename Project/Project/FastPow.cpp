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
	double a3 = myPow(2.0, -5);
	double a4 = myPow(1.00000, INT32_MIN);
	std::cout << 2.0 << '\t' << 10;
	std::cout << std::endl;
	std::cout << a1;
	std::cout << std::endl;
	std::cout << 2.1 << '\t' << 3;
	std::cout << std::endl;
	std::cout << a2;
	std::cout << std::endl;
	std::cout << 2.0 << '\t' << -5;
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
	if (n < 0)
		x = 1 / x;
	return n - 2 * (n / 2) == 0 ? Pow(x*x, n / 2) : x * Pow(x*x, n / 2);
	//if (0.0 == x)return 0.0;
	//else if (1 == x)return 1;

	//if (n<0)
	//{
	//	x = 1.0 / x;
	//	if (INT32_MIN == n)
	//	{
	//		return (Pow(x, -(n + 1))*x);
	//	}
	//	else
	//	{
	//		return  Pow(x, -n);
	//	}
	//}
	//else if (n == 0)
	//{
	//	return 1.0;
	//}
	//else
	//{
	//	return Pow(x, n);
	//}
}
double FastPow::Pow(double x, int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		return n - 2 * (n / 2) == 0 ? Pow(x*x, n / 2) : x * Pow(x*x, n / 2);
    /*if (1 == n)
	{
		return x;
	}
	else if (2 == n)
	{
		return x * x;
	}
	else
	{
		double a = Pow(x, n >> 1);
		if (1 == (n & 1))
		{
			return a * a * x;
		}
		else
		{
			return a * a;
		}
	}*/
}

FastPow::FastPow()
{

}