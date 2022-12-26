#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab10.2/ChyrunSofialab10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest102
{
	TEST_CLASS(UnitTest102)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char str[10] = "sabd hkv.";
			t = MinLength(str);
			Assert::AreEqual(t, 3);
		}
	};
}
