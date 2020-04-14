//
// Created by lucjan on 14.04.2020.
//
#include "../classes/includes.h"
#include "gtest/gtest.h"

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