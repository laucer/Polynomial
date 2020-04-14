//
// Created by lucjan on 14.04.2020.
//

#include "Serializer.h"

void Serializer::savePolynomial(const string &path, const Polynomial &polynomial) {
    ofstream file (path);
    if (!file.is_open()){
        throw runtime_error("Could not open file: " + path);
    }
    file<<"test"<<endl;
}
