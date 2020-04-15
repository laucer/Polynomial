//
// Created by lucjan on 15.04.2020.
//
#include "gtest/gtest.h"
#include "../classes/Polynomial.h"
#include "../classes/StringToPolynomialParser.h"

TEST(StringToPolynomialParserTest, parseLineTest1) {
    Polynomial expectedPolynomial({{2, 0},
                                   {3, 1},
                                   {4, 2}});
    string line = "2+3x+4x^2";
    Polynomial result = StringToPolynomialParser::parseLine(line);
    EXPECT_EQ(expectedPolynomial, result);
}

TEST(StringToPolynomialParserTest, parseLineTest2) {
    Polynomial expectedPolynomial({{2, 0},
                                   {-3, 1},
                                   {4, 2}});
    string line = "2-3x+4x^2";
    Polynomial result = StringToPolynomialParser::parseLine(line);
    EXPECT_EQ(expectedPolynomial, result);
}

TEST(StringToPolynomialParserTest, parseLineTest3) {
    Polynomial expectedPolynomial({{2, 0}});
    string line = "2";
    Polynomial result = StringToPolynomialParser::parseLine(line);
    EXPECT_EQ(expectedPolynomial, result);
}

TEST(StringToPolynomialParserTest, parseLineTest4) {
    Polynomial expectedPolynomial({{-2, 0}});
    string line = "-2";
    Polynomial result = StringToPolynomialParser::parseLine(line);
    EXPECT_EQ(expectedPolynomial, result);
}

TEST(StringToPolynomialParserTest, parseLineTest5) {
    Polynomial expectedPolynomial({{-2, 2}});
    string line = "-2x^2";
    Polynomial result = StringToPolynomialParser::parseLine(line);
    EXPECT_EQ(expectedPolynomial, result);
}

TEST(StringToPolynomialParserTest, parseLineTest6) {
    Polynomial expectedPolynomial({{10, 10}});
    string line = "10x^10";
    Polynomial result = StringToPolynomialParser::parseLine(line);
    EXPECT_EQ(expectedPolynomial, result);
}

TEST(StringToPolynomialParserTest, parseLineTest7) {
    Polynomial expectedPolynomial({{10, 10},
                                   {-30, 50}});
    string line = "10x^10-30x^50";
    Polynomial result = StringToPolynomialParser::parseLine(line);
    EXPECT_EQ(expectedPolynomial, result);
}