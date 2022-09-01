//Zadanie 2 Napisz funkcję, która przyjmie dwa stringi i zwróci ile liter mają wspólnych.

#include <iostream>
#include <string>
#include<vector>
#include <algorithm>

std::vector<char> checkSame(std::string one, std::string two)
{
    std::vector<char>catcher;
    int countSame = 0;

    for (int i = 0; i < one.size(); ++i)
    {
        if (one[i] == two[i])
        {
            catcher.push_back(one[i]);
        }
    }
    return catcher;
}

//int numberOfSameLetters(std::vector<char> a, char c)
//{
//    auto howMany = std::count(a.begin(), a.end(), c);
//    return howMany;
//}

int main()
{
    std::string str1 = "Hello";
    std::string str2 = "Yellow";

    auto fromTwoStrs = checkSame(str1, str2);
    std::for_each(fromTwoStrs.begin(), fromTwoStrs.end(), [](const char a) {std::cout << a << ","; });

    std::cout << "Number of same letters: " << numberOfSameLetters(fromTwoStrs, a);


}

