#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../BCSrec/RectangleFunctions.h"  
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
    TEST_CLASS(RectangleTests)
    {
    public:

        // Task 1 - Test 1: getPerimeter
        TEST_METHOD(TestGetPerimeter_ValidValues)
        {
            // Arrange
            int length = 5;
            int width = 3;

            // Act
            int result = getPerimeter(&length, &width);

            // Assert
            Assert::AreEqual(16, result); 
        }

        // Task 1 - Test 2: getArea
        TEST_METHOD(TestGetArea_ValidValues)
        {
            // Arrange
            int length = 4;
            int width = 6;

            // Act
            int result = getArea(&length, &width);

            // Assert
            Assert::AreEqual(24, result); 
        }

        
// Tests for the Task 2
        TEST_METHOD(TestSetLength_NormalValue)
        {
            int length = 10;
            setLength(50, &length);
            Assert::AreEqual(50, length);
        }

        TEST_METHOD(TestSetLength_MinValue)
        {
            int length = 10;
            setLength(1, &length);
            Assert::AreEqual(1, length);
        }

        TEST_METHOD(TestSetLength_MaxValue)
        {
            int length = 10;
            setLength(99, &length);
            Assert::AreEqual(99, length);
        }

        // setWidth tests
        TEST_METHOD(TestSetWidth_NormalValue)
        {
            int width = 10;
            setWidth(30, &width);
            Assert::AreEqual(30, width);
        }

        TEST_METHOD(TestSetWidth_BelowMin)
        {
            int width = 10;
            setWidth(0, &width);
            Assert::AreEqual(10, width);
        }

        TEST_METHOD(TestSetWidth_AboveMax)
        {
            int width = 10;
            setWidth(100, &width);
            Assert::AreEqual(10, width);
        }

    };
}
