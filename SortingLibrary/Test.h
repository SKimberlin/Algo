#pragma once
#include <string>
class Test
{
public:
	static int AddOne(int numberToAdd)
	{
		return ++numberToAdd;
	}
	static int AddInts(int firstNumber, int secondNumber)
	{
		return firstNumber + secondNumber;
	}
	static bool AreEqual(int firstNumber, int secondNumber)
	{
		return (firstNumber == secondNumber);
	}
};