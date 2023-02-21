/*
 * @Author: Tomato
 * @Date: 2023-02-21 23:28:16
 * @LastEditTime: 2023-02-21 23:29:44
 */

// Generated from TomParser.g4 by ANTLR 4.12.0

#pragma once


#include <antlr4-runtime.h>
#include <TomParserParser.h>


/**
 * This interface defines an abstract listener for a parse tree produced by TomParserParser.
 */
class  TomParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterExpr(TomParserParser::ExprContext *ctx) = 0;
  virtual void exitExpr(TomParserParser::ExprContext *ctx) = 0;

  virtual void enterPrimary(TomParserParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(TomParserParser::PrimaryContext *ctx) = 0;


};

