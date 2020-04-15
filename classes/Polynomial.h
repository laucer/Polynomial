//
// Created by lucjan on 14.04.2020.
//

#ifndef POLYNOMIALS_POLYNOMIAL_H
#define POLYNOMIALS_POLYNOMIAL_H
#include "includes.h"

class Polynomial {
private:
    vector<pair<int, int>> polynomial;
public:
    Polynomial(const vector<pair<int, int> > &polynomial);
    const vector<pair<int, int> > &getPolynomial() const;
    void setPolynomial(const vector<pair<int, int> > &polynomial);
    double value(const double x);
    Polynomial derivative();
    bool operator==(const Polynomial &rhs) const;
    bool operator!=(const Polynomial &rhs) const;
};


#endif //POLYNOMIALS_POLYNOMIAL_H
