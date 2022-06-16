#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/5/lab_5.1E/lab_5.1E/Object.cpp"
#include "../../../../../політех/ооп/5/lab_5.1E/lab_5.1E/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(4, 4), B(4, 4);
			Assert::AreEqual(A == B, true);
		}
	};
}
