
// Generated from Script.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ScriptParser.h"


namespace tomato {

/**
 * This interface defines an abstract listener for a parse tree produced by ScriptParser.
 */
class  ScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterExpr(ScriptParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ScriptParser::ExprContext *ctx) = 0;

  virtual void enterPrimary(ScriptParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(ScriptParser::PrimaryContext *ctx) = 0;


};

}  // namespace tomato
