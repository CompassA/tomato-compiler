
// Generated from ../antlr4-code/Script.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ScriptListener.h"


namespace tomato {

/**
 * This class provides an empty implementation of ScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ScriptBaseListener : public ScriptListener {
public:

  virtual void enterStatement(ScriptParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ScriptParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlock(ScriptParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ScriptParser::BlockContext * /*ctx*/) override { }

  virtual void enterVariableDeclarator(ScriptParser::VariableDeclaratorContext * /*ctx*/) override { }
  virtual void exitVariableDeclarator(ScriptParser::VariableDeclaratorContext * /*ctx*/) override { }

  virtual void enterType(ScriptParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(ScriptParser::TypeContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(ScriptParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(ScriptParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterExprList(ScriptParser::ExprListContext * /*ctx*/) override { }
  virtual void exitExprList(ScriptParser::ExprListContext * /*ctx*/) override { }

  virtual void enterExpr(ScriptParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ScriptParser::ExprContext * /*ctx*/) override { }

  virtual void enterFuncDef(ScriptParser::FuncDefContext * /*ctx*/) override { }
  virtual void exitFuncDef(ScriptParser::FuncDefContext * /*ctx*/) override { }

  virtual void enterFuncCall(ScriptParser::FuncCallContext * /*ctx*/) override { }
  virtual void exitFuncCall(ScriptParser::FuncCallContext * /*ctx*/) override { }

  virtual void enterPrimary(ScriptParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(ScriptParser::PrimaryContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace tomato
