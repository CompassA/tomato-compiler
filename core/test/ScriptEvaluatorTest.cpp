/*
 * @Author: Tomato
 * @Date: 2023-03-04 00:52:35
 * @LastEditTime: 2023-03-04 01:18:16
 */
#include <gtest/gtest.h>
#include <antlr4-runtime.h>
#include <TomLexer.h>
#include <ScriptParser.h>
#include <tom/ScriptEvaluator.h>

TEST(EvaluatorTest, exprTest) {
    antlr4::ANTLRInputStream input{"(2*(2+3))*2+(6/2)"};
    tomato::TomLexer lexer{&input};
    antlr4::CommonTokenStream tokens{&lexer};
    tomato::ScriptParser parser(&tokens);

    tomato::ScriptEvaluator evaluator;
    int v = std::any_cast<int>(evaluator.visit(parser.expr()));
    EXPECT_EQ(v, 23);
}