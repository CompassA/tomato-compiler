
// Generated from ../antlr4-code/Script.g4 by ANTLR 4.12.0

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
    virtual std::any visitStatement(ScriptParser::StatementContext *context) = 0;

    virtual std::any visitBlock(ScriptParser::BlockContext *context) = 0;

    virtual std::any visitVariableDeclarator(ScriptParser::VariableDeclaratorContext *context) = 0;

    virtual std::any visitType(ScriptParser::TypeContext *context) = 0;

    virtual std::any visitPrimitiveType(ScriptParser::PrimitiveTypeContext *context) = 0;

    virtual std::any visitExprList(ScriptParser::ExprListContext *context) = 0;

    virtual std::any visitExpr(ScriptParser::ExprContext *context) = 0;

    virtual std::any visitFuncDef(ScriptParser::FuncDefContext *context) = 0;

    virtual std::any visitFuncCall(ScriptParser::FuncCallContext *context) = 0;

    virtual std::any visitPrimary(ScriptParser::PrimaryContext *context) = 0;


};

}  // namespace tomato
