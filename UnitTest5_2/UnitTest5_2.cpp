#include "pch.h"
#include "CppUnitTest.h"
#include "../LabAP5.2/LabAP5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:
        TEST_METHOD(TestMethodA)
        {
            double a = 1.0;  
            A(0.5, 1, a);  
            double expected = 0.04166666667;
            Assert::AreEqual(expected, a, 0.000001);
        }

        TEST_METHOD(TestMethodS)
        {
            double s = 0.0;  
            int n = 0;      
            double x = 0.5;
            double eps = 0.1;
            S(x, eps, n, s);
            double expected = asin(x);
            Assert::AreEqual(expected, s, 0.1);
        }

    };
}

