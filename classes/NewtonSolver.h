//
// Created by lucjan on 14.04.2020.
//

#ifndef POLYNOMIALS_NEWTONSOLVER_H
#define POLYNOMIALS_NEWTONSOLVER_H

#include "includes.h"

class NewtonSolver {
public:
    vector<double> solve(Polynomial &polynomial, vector<double> startingPoints);

};


#endif //POLYNOMIALS_NEWTONSOLVER_H
