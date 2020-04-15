//
// Created by lucjan on 15.04.2020.
//

#ifndef POLYNOMIALS_STRINGTOPOLYNOMIALPARSER_H
#define POLYNOMIALS_STRINGTOPOLYNOMIALPARSER_H
#include "includes.h"
#include "Polynomial.h"

class StringToPolynomialParser {
public:
    static Polynomial parseLine(string line);
};


#endif //POLYNOMIALS_STRINGTOPOLYNOMIALPARSER_H
