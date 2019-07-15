#include "LongestPalindromicSubstring.h"
#include <math.h>
LongestPalindromicSubstring::LongestPalindromicSubstring()
{
}

std::string LongestPalindromicSubstring::GetName()
{
	return "最长回文子串";
}

std::string LongestPalindromicSubstring::GetDesc()
{
	return "给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。";
}

void LongestPalindromicSubstring::Solution()
{
	auto r = longestPalindrome("babad");
	std::cout << "babad" << std::endl;
	std::cout << r << std::endl;

	auto r2 = longestPalindrome("cbbd");
	std::cout << "cbbd" << std::endl;
	std::cout << r2 << std::endl;
	auto r3 = longestPalindrome("cdbbbd");
	std::cout << "cdbbbd" << std::endl;
	std::cout << r3 << std::endl;
}

//中心扩散算法
int LongestPalindromicSubstring::expandAroundCenter(std::string s, int left, int right)
{
	int L = left, R = right;
	while (L >= 0 && R < s.length() && s[R] == s[L])
	{
		L--;
		R++;
	}
	return R - L - 1;
}

std::string LongestPalindromicSubstring::longestPalindrome(std::string s)
{
	if (s.length() < 2)
	{
		return s;
	}

	int start = 0, end = 0, len = 0;
	for (size_t i = 0; i < s.length(); i++)
	{
		int len1 = expandAroundCenter(s, i, i);
		int len2 = expandAroundCenter(s, i, i + 1);
		//std::cout <<  std::endl;
		//std::cout << "Len2:" << len2 << "Len2:" << len2 << std::endl;
		int tlen = (len1 > len2 ? len1 : len2);
		len = (len > tlen ? len : tlen);
		if (len > (end - start + 1))
		{
			start = i - ((len - 1) / 2);
			end = i + (len / 2);
		}
	}
	//end = end - 2;
	//int count = end - start;
	//std::cout << "start:" << start << " end:" << end << "len:" << len << "count:" << count << std::endl;

	return s.substr(start, len);
}
