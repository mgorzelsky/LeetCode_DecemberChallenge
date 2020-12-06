#include "pch.h"
#include "CppUnitTest.h"
#include "..\2020.12.05_CanPlaceFlowers\CanPlaceFlowers.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CanPlaceFlowersUnitTests
{
	TEST_CLASS(CanPlaceFlowersUnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> test{ 1, 0, 0, 0, 1 };
			int n = 1;
			bool result = canPlaceFlowers(test, n);

			Assert::IsTrue(result);
		}
		TEST_METHOD(TestMethod2)
		{
			vector<int> test{ 1, 0, 0, 0, 1 };
			int n = 2;
			bool result = canPlaceFlowers(test, n);

			Assert::IsFalse(result);
		}
		TEST_METHOD(TestMethod3)
		{
			vector<int> test{ 1, 1, 0, 0 };
			int n = 1;
			bool result = canPlaceFlowers(test, n);

			Assert::IsTrue(result);
		}
		TEST_METHOD(TestMethod4)
		{
			vector<int> test{ 0 };
			int n = 1;
			bool result = canPlaceFlowers(test, n);

			Assert::IsTrue(result);
		}
		TEST_METHOD(TestMethod5)
		{
			vector<int> test{ 0 };
			int n = 2;
			bool result = canPlaceFlowers(test, n);

			Assert::IsFalse(result);
		}
		TEST_METHOD(TestMethod6)
		{
			vector<int> test{ 1 };
			int n = 1;
			bool result = canPlaceFlowers(test, n);

			Assert::IsFalse(result);
		}
		TEST_METHOD(TestMethod7)
		{
			vector<int> test{ 1, 0, 0, 0, 1, 0, 0 };
			int n = 2;
			bool result = canPlaceFlowers(test, n);

			Assert::IsTrue(result);
		}
		TEST_METHOD(TestMethod8)
		{
			vector<int> test{ 0, 0 };
			int n = 2;
			bool result = canPlaceFlowers(test, n);

			Assert::IsFalse(result);
		}
		TEST_METHOD(TestMethod9)
		{
			vector<int> test{ 0, 0, 0, 0 };
			int n = 3;
			bool result = canPlaceFlowers(test, n);

			Assert::IsFalse(result);
		}
		TEST_METHOD(TestMethod10)
		{
			vector<int> test{ 0, 1, 0 };
			int n = 1;
			bool result = canPlaceFlowers(test, n);

			Assert::IsFalse(result);
		}
	};
}