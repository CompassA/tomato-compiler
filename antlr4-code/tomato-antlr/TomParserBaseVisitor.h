
// Generated from TomParser.g4 by ANTLR 4.12.0

#pragma once


#include <antlr4-runtime.h>
#include <TomParserVisitor.h>


/**
 * This class provides an empty implementation of TomParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TomParserBaseVisitor : public TomParserVisitor {
public:

  virtual std::any visitExpr(TomParserParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(TomParserParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }


};

