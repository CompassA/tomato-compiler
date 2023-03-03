
// Generated from Script.g4 by ANTLR 4.12.0

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

  virtual void enterExpr(ScriptParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(ScriptParser::ExprContext * /*ctx*/) override { }

  virtual void enterPrimary(ScriptParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(ScriptParser::PrimaryContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace tomato
