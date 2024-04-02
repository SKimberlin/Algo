#pragma once
#include <vector>
#include <array>
#include <algorithm>
#include "Utilities.h"

class Sorter
{
public:
	static void BubbleSort(std::vector<int>& unsortedArray)
	{
		bool numberSwapped = true;
		while (numberSwapped)
		{
			numberSwapped = false;
			for (int i = 0; i < unsortedArray.size() - 1; i++)
			{
				if (unsortedArray[i] > unsortedArray[i + 1])
				{
					Utilities::Swap(unsortedArray[i], unsortedArray[i + 1]);
					numberSwapped = true;
				}
			}
		}
	}

	template<typename T>
	static void OptBubbleSort(std::vector<T>& array)
	{
		auto n = array.size();
		while (n > 1)
		{
			auto newn = 0;
			for (int i = 1; i < n; i++)
			{
				if (array[i - 1] > array[i])
				{
					Utilities::Swap<T>(array[i - 1], array[i]);
					newn = i;
				}
			}
			n = newn;
		}
	}

	template<typename T>
	static void	InsertionSort(std::vector<T>& array)
	{
		auto n = 1;
		while (n < array.size())
		{
			for (int i = n; i > 0; i--)
			{
				/*if ()
				{

				}*/
			}
			n++;
		}
	}

	template<typename T>
	static void	SelectionSort(std::vector<T>& array)
	{
		for (int i = 0; i < array.size(); i++)
		{
			T selection = array[i];
			for (int j = i + 1; j < array.size(); j++)
			{
				if (selection < array[j])
				{
					Utilities::Swap<T>(selection, array[j]);
				}
			}
			array[i] = selection;
		}
	}
};