//
// Created by lucjan on 14.04.2020.
//

#include "NewtonSolver.h"

set<double> NewtonSolver::solve(Polynomial &polynomial) {
    const double EPS = 0.001;
    vector<double> startingPoints = generateStartingPoints();
    Polynomial derivative = polynomial.derivative();
    set<double> polynomialRoots;
    for (int startingPoint : startingPoints) {
        double x = startingPoint - (polynomial.value(startingPoint) / derivative.value(startingPoint));
        int iters = 0;
        while (abs(polynomial.value(x)) > EPS) {
            if (iters > 1000)
                break;
            x = startingPoint - (polynomial.value(startingPoint) / derivative.value(startingPoint));
            startingPoint = x;
            ++iters;
        }
        if (abs(polynomial.value(x)) <= EPS) {
            polynomialRoots.insert(x);
        }
    }
    return polynomialRoots;
}

vector<double> NewtonSolver::generateStartingPoints() {
    vector<double> startingPoints;
    double i = 1000000;
    while (i > -1000000) {
        startingPoints.push_back(i);
        i -= 100;
    }
    return startingPoints;
}

