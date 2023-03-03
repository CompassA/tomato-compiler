
// Generated from Script.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ScriptParser.h"


namespace tomato {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by ScriptParser.
 */
class  ScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ScriptParser.
   */
    virtual std::any visitExpr(ScriptParser::ExprContext *context) = 0;

    virtual std::any visitPrimary(ScriptParser::PrimaryContext *context) = 0;


};

}  // namespace tomato
