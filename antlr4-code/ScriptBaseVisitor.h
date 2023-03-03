
// Generated from Script.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ScriptVisitor.h"


namespace tomato {

/**
 * This class provides an empty implementation of ScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ScriptBaseVisitor : public ScriptVisitor {
public:

  virtual std::any visitExpr(ScriptParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(ScriptParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace tomato
