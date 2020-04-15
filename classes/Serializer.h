//
// Created by lucjan on 14.04.2020.
//

#ifndef POLYNOMIALS_SERIALIZER_H
#define POLYNOMIALS_SERIALIZER_H

#include "includes.h"

class Serializer {
public:
    void savePolynomial(const string &path, const Polynomial &polynomial);
};


#endif //POLYNOMIALS_SERIALIZER_H
