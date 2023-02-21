/*
 * @Author: Tomato
 * @Date: 2023-02-21 23:32:36
 * @LastEditTime: 2023-02-21 23:50:33
 */
#include <antlr4-runtime.h>
#include <TomLexer.h>
#include <TomParserParser.h>
#include <gtest/gtest.h>

#include <stdio.h>

TEST(PARSER, expression_test) {
    antlr4::ANTLRInputStream input{"(1+2+3)*1"};
    tomato::TomLexer lexer{&input};
    antlr4::CommonTokenStream tokens{&lexer};
    TomParserParser parser(&tokens);
    auto v = parser.expr();
    printf("e");
}