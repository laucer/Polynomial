//
// Created by lucjan on 14.04.2020.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../classes/Serializer.h"


using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test {
    public:
        Serializer obj;

        ClassDeclaration() {
            obj;
        }
    };
}

TEST_F(ClassDeclaration, nameOfTheTest1) {
    ASSERT_EQ("", "");
}