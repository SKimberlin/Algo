#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <numeric>
#include <random>
#include <algorithm>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Algo
{
	TEST_CLASS(Algo)
	{
	public:

		TEST_METHOD(Happy_Path)
		{
			std::vector<int> array{ 3, 25, 1, 999, 45, 33, 20, 55, 6, 24 };

			std::vector<int> expected{ 1, 3, 6, 20, 24, 25, 33, 45, 55, 999 };

			Sorter::OptBubbleSort(array);

			Assert::IsTrue(expected == array);
			
		}

		TEST_METHOD(Swap_Method)
		{
			std::vector<int> array1{ 3, 25, 1, 999, 45, 33, 20, 55, 6, 24 };

			std::vector<int> array2{ 1, 3, 6, 20, 24, 25, 33, 45, 55, 999 };

			std::vector<int> expected{ 1, 3, 6, 20, 24, 25, 33, 45, 55, 999 };

			Utilities::Swap<std::vector<int>>(array1, array2);

			Assert::IsTrue(expected == array1);
		}

		TEST_METHOD(Empty_Array)
		{
			std::vector<int> array;
			Sorter::OptBubbleSort(array);
			Assert::IsTrue(array.empty());
		}

		TEST_METHOD(Pre_Sorted)
		{
			std::vector<int> array{ 1, 3, 6, 20, 24, 25, 33, 45, 55, 999 };

			std::vector<int> expected{ 1, 3, 6, 20, 24, 25, 33, 45, 55, 999 };

			Sorter::OptBubbleSort(array);

			Assert::IsTrue(expected == array);
		}

		TEST_METHOD(Duplicate_Numbers)
		{
			std::vector<int> array{ 5, 2, 99, 24, 2, 5, 1, 6, 1, 1, 7, 4 };

			Sorter::OptBubbleSort(array);

			Assert::IsTrue(std::is_sorted(array.begin(), array.end()));
		}

		TEST_METHOD(Large_Array)
		{
			std::vector<int> array(5000);

			for (int i = 0; i < array.size(); i++)
			{
				std::srand(i);
				array[i] = std::rand();
			}

			Sorter::OptBubbleSort(array);

			Assert::IsTrue(std::is_sorted(array.begin(), array.end()));

		}

		TEST_METHOD(Insertion)
		{
			std::vector<int> array{ 3, 25, 1, 999, 45, 33, 20, 55, 6, 24 };

			std::vector<int> expected{ 1, 3, 6, 20, 24, 25, 33, 45, 55, 999 };

			Sorter::InsertionSort(array);

			Assert::IsTrue(expected == array);

		}

		TEST_METHOD(Selection)
		{
			std::vector<int> array{ 3, 25, 1, 999, 45, 33, 20, 55, 6, 24 };

			std::vector<int> expected{ 1, 3, 6, 20, 24, 25, 33, 45, 55, 999 };

			Sorter::SelectionSort(array);

			Assert::IsTrue(expected == array);

		}
	};
}
