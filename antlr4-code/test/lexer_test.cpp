#include <antlr4-runtime.h>
#include <TomLexer.h>
#include <gtest/gtest.h>

#include <stdio.h>

TEST(LEXER, lib_import_test) {
    antlr4::ANTLRInputStream input{"int a = 1; int b = 2;"};
    tomato::TomLexer lexer{&input};
    antlr4::CommonTokenStream tokens{&lexer};
    
    tokens.fill();

    for (auto token : tokens.getTokens()) {
        printf("%s\n", token->toString().c_str());
    }
}