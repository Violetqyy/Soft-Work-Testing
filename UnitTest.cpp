#include "pch.h"
#include "CppUnitTest.h"
#include "..\Pre_Test\compute.h"
#include "..\Pre_Test\compute.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
        TEST_METHOD(Test1) {
            compute calc;
            double result = calc.zjm(7, 6, 0);
            Assert::AreEqual(13.0,result);
        } // a不等于与0
        TEST_METHOD(Test2) {
            compute calc;
            double result = calc.zjm(10, 0, 4);
            Assert::AreEqual(2.5, result);
        }// a=0,b!=0且x》0
      
        TEST_METHOD(Test3) {
            compute calc;
            auto func = [&] { calc.zjm(-10, 0, 2); };
            Assert::ExpectException<std::runtime_error>(func);
        }//  a=0,b!=0且x<0
      
        TEST_METHOD(Test4) {
            compute calc;
            auto func = [&] { calc.zjm(10, 0, 0); };
            Assert::ExpectException<std::runtime_error>(func);
        }// a=0,b=0
     
        TEST_METHOD(Test5) {
            compute calc;
            auto func = [&] { calc.zjm(0, 0, 2); };
            Assert::ExpectException<std::runtime_error>(func);
        }// a=0,b!=0 x=0
    };
}
