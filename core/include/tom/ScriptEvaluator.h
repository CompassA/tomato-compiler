/*
 * @Author: Tomato
 * @Date: 2023-02-23 23:29:13
 * @LastEditTime: 2023-02-24 00:03:52
 */
#ifndef TOMATO_COMPILER_CORE_INCLUDE_TOM_SCRIPT_VISITOR
#define TOMATO_COMPILER_CORE_INCLUDE_TOM_SCRIPT_VISITOR

#include <ScriptBaseVisitor.h>


namespace tomato {

class ScriptEvaluator: public ScriptBaseVisitor {
public:

  virtual std::any visitExpr(ScriptParser::ExprContext *ctx) override;

  virtual std::any visitPrimary(ScriptParser::PrimaryContext *ctx) override;
};

}

#endif