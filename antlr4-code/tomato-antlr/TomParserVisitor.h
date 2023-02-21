
// Generated from TomParser.g4 by ANTLR 4.12.0

#pragma once


#include <antlr4-runtime.h>
#include <TomParserParser.h>



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TomParserParser.
 */
class  TomParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TomParserParser.
   */
    virtual std::any visitExpr(TomParserParser::ExprContext *context) = 0;

    virtual std::any visitPrimary(TomParserParser::PrimaryContext *context) = 0;


};

