#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3E/Date.cpp"
#include "../3.3E/Date.h"
#include "../3.3E/Triad.cpp"
#include "../3.3E/Triad.h"
#include "../3.3E/Object.cpp"
#include "../3.3E/Object.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date a(9, 9), b(1, 1);
			Assert::AreEqual(a > b, true);

		}
	};
}
