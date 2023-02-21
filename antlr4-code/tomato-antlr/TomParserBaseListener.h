
// Generated from TomParser.g4 by ANTLR 4.12.0

#pragma once


#include <antlr4-runtime.h>
#include <TomParserListener.h>


/**
 * This class provides an empty implementation of TomParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TomParserBaseListener : public TomParserListener {
public:

  virtual void enterExpr(TomParserParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(TomParserParser::ExprContext * /*ctx*/) override { }

  virtual void enterPrimary(TomParserParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(TomParserParser::PrimaryContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

