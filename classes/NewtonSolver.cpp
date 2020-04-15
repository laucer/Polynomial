//
// Created by lucjan on 14.04.2020.
//

#include "NewtonSolver.h"

vector<double> NewtonSolver::solve(Polynomial &polynomial, vector<double> startingPoints) {
    const double EPS = 0.001;
    Polynomial derivative = polynomial.derivative();
    vector<double> polynomialRoots;
    for (int startingPoint : startingPoints) {
        double x = startingPoint - (polynomial.value(startingPoint) / derivative.value(startingPoint));
        while (abs(polynomial.value(x)) > EPS) {
            x = startingPoint - (polynomial.value(startingPoint) / derivative.value(startingPoint));
            startingPoint = x;
        }
        polynomialRoots.push_back(x);
    }
    return polynomialRoots;
}
