#include "StringConverter.hpp"

std::string StringConverter::toCamelCase(std::string str1)
{
	int n = str1.length();

	for (int i = 0; i < n; ++i)
	{
		str1[i + 1] = toupper(str1[i + 1]);
	}
	return str1;
}
