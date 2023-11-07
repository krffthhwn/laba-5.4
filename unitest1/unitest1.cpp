#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.4/laba5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLAB54
{
	TEST_CLASS(UnitTestLAB54)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double test;
			test = S1(15);
			double z = abs(test - 0.0183349);

			Assert::IsTrue(z < 1e-5);

		}
	};
}

