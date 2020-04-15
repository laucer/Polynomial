//
// Created by lucjan on 15.04.2020.
//

#include "StringToPolynomialParser.h"

template<class Container>
void split(const string &str, Container &cont, const string &delims) {
    size_t current, previous = 0;
    bool isFirstIteration = true;
    current = str.find_first_of(delims);
    while (current != string::npos) {
        if (isFirstIteration) {
            cont.push_back(str.substr(previous, current - previous));
            isFirstIteration = false;
        } else {
            cont.push_back(str.substr(previous - 1, current - previous + 1));
        }
        previous = current + 1;
        current = str.find_first_of(delims, previous);
    }
    if (isFirstIteration)
        cont.push_back(str.substr(previous, current - previous));
    else
        cont.push_back(str.substr(previous - 1, current - previous));
}

Polynomial StringToPolynomialParser::parseLine(string line) {
    vector<pair<int, int>> polynomial;
    vector<string> splitted;
    split(line, splitted, "+-");
    for (string el : splitted) {
        if (el.empty())
            continue;
        double isPositive = 1;
        if (el.find("+") != string::npos) {
            el.erase(std::remove(el.begin(), el.end(), '+'), el.end());
        } else if (el.find("-") != string::npos) {
            isPositive = -1;
            el.erase(std::remove(el.begin(), el.end(), '-'), el.end());
        }
        if (el.find("x") == string::npos) {
            polynomial.push_back({stod(el) * isPositive, 0});
        } else if (el.find("^") == string::npos) {
            vector<string> partOfPolynomial;
            split(el, partOfPolynomial, "x");
            string val1 = partOfPolynomial[0];
            val1.erase(std::remove(val1.begin(), val1.end(), 'x'), val1.end());
            polynomial.push_back({stod(val1) * isPositive, 1});
        } else {
            vector<string> partOfPolynomial;
            split(el, partOfPolynomial, "^");
            string val1 = partOfPolynomial[0];
            val1.erase(std::remove(val1.begin(), val1.end(), 'x'), val1.end());
            string val2 = partOfPolynomial[1];
            val2.erase(std::remove(val2.begin(), val2.end(), '^'), val2.end());
            polynomial.push_back({stod(val1) * isPositive, stod(val2)});
        }
    }
    return Polynomial(polynomial);
}
