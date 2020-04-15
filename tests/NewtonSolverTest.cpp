//
// Created by lucjan on 15.04.2020.
//

#include "../classes/includes.h"
#include "gtest/gtest.h"
#include "../classes/Polynomial.h"
#include "../classes/NewtonSolver.h"

TEST(NewtonSolverTest, testPolynomialRoot1) {
    Polynomial polynomial({{-10, 0},
                           {8,  1},
                           {2,  2}});
    NewtonSolver newtonSolver;
    set<double> result = newtonSolver.solve(polynomial);
    set<double> expectedResult;
    expectedResult.insert(1);
    expectedResult.insert(-5);
    EXPECT_EQ(expectedResult, result);
}


TEST(NewtonSolverTest, testPolynomialRoot2) {
    Polynomial polynomial({{-10, 0},
                           {3,  1},
                           {4,  3},
                           {3,  4}});
    NewtonSolver newtonSolver;
    set<double> result = newtonSolver.solve(polynomial);
    set<double> expectedResult;
    expectedResult.insert(-2);
    expectedResult.insert(1);
    EXPECT_EQ(expectedResult, result);
}

