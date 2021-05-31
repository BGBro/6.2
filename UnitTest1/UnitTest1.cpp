#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array unitTest = Array(5);

			for (int i = 0; i < 5; i++)
				unitTest[i] = 5;

			Assert::AreEqual(25., unitTest.sum());

		}
	};
}
