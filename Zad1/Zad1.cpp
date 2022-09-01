//Zadanie 1 Napisz funkcję, która odwróci podanego stringa.

#include <iostream>
#include <string>

void reverseString(std::string str)
{
    std::string reversedStr;

    for (int i = str.length()-1; i >= 0; --i)
    {
        reversedStr.push_back(str[i]);
    }
    std::cout<<"Original string: " <<str<<std::endl;
    std::cout<<"Reversed string: "<<reversedStr<<std::endl;
}

int main()
{
    reverseString("HELLO!");
}

