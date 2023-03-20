
// Generated from ../antlr4-code/Script.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ScriptParser.h"


namespace tomato {

/**
 * This interface defines an abstract listener for a parse tree produced by ScriptParser.
 */
class  ScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStatement(ScriptParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ScriptParser::StatementContext *ctx) = 0;

  virtual void enterBlock(ScriptParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ScriptParser::BlockContext *ctx) = 0;

  virtual void enterVariableDeclarator(ScriptParser::VariableDeclaratorContext *ctx) = 0;
  virtual void exitVariableDeclarator(ScriptParser::VariableDeclaratorContext *ctx) = 0;

  virtual void enterType(ScriptParser::TypeContext *ctx) = 0;
  virtual void exitType(ScriptParser::TypeContext *ctx) = 0;

  virtual void enterPrimitiveType(ScriptParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(ScriptParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterExprList(ScriptParser::ExprListContext *ctx) = 0;
  virtual void exitExprList(ScriptParser::ExprListContext *ctx) = 0;

  virtual void enterExpr(ScriptParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ScriptParser::ExprContext *ctx) = 0;

  virtual void enterFuncDef(ScriptParser::FuncDefContext *ctx) = 0;
  virtual void exitFuncDef(ScriptParser::FuncDefContext *ctx) = 0;

  virtual void enterFuncCall(ScriptParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(ScriptParser::FuncCallContext *ctx) = 0;

  virtual void enterPrimary(ScriptParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(ScriptParser::PrimaryContext *ctx) = 0;


};

}  // namespace tomato
