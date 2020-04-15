//
// Created by lucjan on 14.04.2020.
//

#ifndef POLYNOMIALS_NEWTONSOLVER_H
#define POLYNOMIALS_NEWTONSOLVER_H

#include "includes.h"
#include "Polynomial.h"

class NewtonSolver {
public:
    set<double> solve(Polynomial &polynomial);
private:
    vector<double> generateStartingPoints();
};


#endif //POLYNOMIALS_NEWTONSOLVER_H
