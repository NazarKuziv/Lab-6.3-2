#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 6.3-2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[6] = { 1,1,1,1,1,1 };

			int S = Sum(a, 6, 0, 0);

			Assert::AreEqual(S, 6);
		}
	};
}
