//
// Created by lucjan on 14.04.2020.
//

#include "Polynomial.h"

Polynomial::Polynomial(const vector<pair<int, int> > &polynomial) : polynomial(polynomial) {}

const vector<pair<int, int> > &Polynomial::getPolynomial() const {
    return polynomial;
}

void Polynomial::setPolynomial(const vector<pair<int, int> > &polynomial) {
    Polynomial::polynomial = polynomial;
}

double Polynomial::value(int x) {
    double value = 0;
    for (auto el : this->polynomial) {
        value += el.first * pow(x, el.second);
    }
    return value;
}
