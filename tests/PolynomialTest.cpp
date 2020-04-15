//
// Created by lucjan on 14.04.2020.
//
#include "../classes/includes.h"
#include "gtest/gtest.h"

TEST(PolynomialTest, test1AreEqualTrue) {
    Polynomial polynomial1({{1, 0},
                            {2, 1},
                            {3, 3}});
    Polynomial polynomial2({{1, 0},
                            {2, 1},
                            {3, 3}});
    EXPECT_EQ(polynomial1, polynomial2);
}

TEST(PolynomialTest, test2AreEqualTrue) {
    Polynomial polynomial1({});
    Polynomial polynomial2({});
    EXPECT_EQ(polynomial1, polynomial2);
}

TEST(PolynomialTest, test1AreEqualFalse) {
    Polynomial polynomial1({{1, 0},
                            {2, 1},
                            {3, 3}});
    Polynomial polynomial2({{1, 0},
                            {2, 3},
                            {3, 3}});
    EXPECT_FALSE(polynomial1 == polynomial2);
}

TEST(PolynomialTest, test2AreEqualFalse) {
    Polynomial polynomial1({});
    Polynomial polynomial2({{1, 0},
                            {2, 3},
                            {3, 3}});
    EXPECT_FALSE(polynomial1 == polynomial2);
}

TEST(PolynomialTest, test3AreEqualFalse) {
    Polynomial polynomial1({{1, 0},
                            {2, 3},
                            {3, 3}});
    Polynomial polynomial2({});
    EXPECT_FALSE(polynomial1 == polynomial2);
}

TEST(PolynomialTest, testValueOfPolynomialShouldBe1) {
    Polynomial polynomial({{1, 0},
                           {2, 1},
                           {3, 3}});
    EXPECT_EQ(1, polynomial.value(0));
}

TEST(PolynomialTest, testValueOfPolynomialShouldBe0) {
    Polynomial polynomial({});
    EXPECT_EQ(0, polynomial.value(0));
}

TEST(PolynomialTest, testValueOfPolynomialShouldBe90) {
    Polynomial polynomial({{3, 0},
                           {2, 1},
                           {3, 3}});
    EXPECT_EQ(90, polynomial.value(3));
}

TEST(PolynomialTest, testDerivativeOfConst) {
    Polynomial polynomial({{3, 0}});
    Polynomial expectedResult({{0, 0}});
    EXPECT_EQ(expectedResult, polynomial.derivative());
}


TEST(PolynomialTest, testDerivative) {
    Polynomial polynomial({{3, 0},
                           {3, 1},
                           {4, 2}});
    Polynomial expectedResult({{0, 0},
                               {3, 0},
                               {8, 1}});
    EXPECT_EQ(expectedResult, polynomial.derivative());
}
