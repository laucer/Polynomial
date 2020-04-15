//
// Created by lucjan on 15.04.2020.
//

#include "../classes/includes.h"
#include "gtest/gtest.h"


TEST(NewtonSolverTest, testPolynomialRoot) {
Polynomial polynomial({{-16, 0},
                       {6, 1},
                       {1, 2}});
vector<double> startingPoints;
startingPoints.push_back(3.0);
//    startingPoints.push_back(3);
NewtonSolver newtonSolver;
newtonSolver.solve(polynomial, startingPoints);
//EXPECT_EQ(expectedResult, polynomial.derivative());
}

