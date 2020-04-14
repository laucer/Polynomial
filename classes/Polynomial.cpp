//
// Created by lucjan on 14.04.2020.
//

#include "Polynomial.h"
#include "includes.h"

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

bool Polynomial::operator==(const Polynomial &rhs) const {
    if (this->polynomial.size() != rhs.polynomial.size())
        return false;
    int size = this->polynomial.size();
    for (int i = 0; i < size; ++i) {
        if (this->polynomial[i] != rhs.polynomial[i])
            return false;
    }
    return true;
}

bool Polynomial::operator!=(const Polynomial &rhs) const {
    return !(rhs == *this);
}

Polynomial Polynomial::derivative() {
    vector<pair<int, int>> newPolynomial;
    for (auto el : this->polynomial) {
        if (el.second == 0) {
            newPolynomial.push_back({0, 0});
        } else {
            newPolynomial.push_back({el.first * el.second, el.second - 1});
        }
    }
    return Polynomial(newPolynomial);
}
