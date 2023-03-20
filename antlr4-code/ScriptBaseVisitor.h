
// Generated from ../antlr4-code/Script.g4 by ANTLR 4.12.0

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

  virtual std::any visitStatement(ScriptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(ScriptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclarator(ScriptParser::VariableDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(ScriptParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveType(ScriptParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprList(ScriptParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(ScriptParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(ScriptParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(ScriptParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(ScriptParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace tomato
