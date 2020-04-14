//
// Created by lucjan on 14.04.2020.
//

#ifndef POLYNOMIALS_POLYNOMIAL_H
#define POLYNOMIALS_POLYNOMIAL_H
#include "includes.h"

using namespace std;

class Polynomial {
private:
    vector<pair<int, int>> polynomial;
public:
    Polynomial(const vector<pair<int, int> > &polynomial);
    const vector<pair<int, int> > &getPolynomial() const;
    void setPolynomial(const vector<pair<int, int> > &polynomial);
    double value(const int x);
};


#endif //POLYNOMIALS_POLYNOMIAL_H
