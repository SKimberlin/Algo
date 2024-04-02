#pragma once
#include <string>
#include <sstream>

class Utilities
{
public:
    template<typename T>
    static void Swap(T& input1, T& input2)
    {
        T temp = input2;
        input2 = input1;
        input1 = temp;
    }

	static void Swap(int& num1, int& num2) {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }
    static std::string ToString( std::vector<int>& input)
    {
        std::stringstream ss;

        for (int i = 0; i < input.size(); i++)
        {
            ss << input[i];
            if (i != input.size() - 1) ss << ", ";
        }

        return ss.str();
    }
};