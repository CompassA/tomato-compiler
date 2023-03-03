/*
 * @Author: Tomato
 * @Date: 2023-02-23 23:28:59
 * @LastEditTime: 2023-03-04 00:51:53
 */
#include <tom/ScriptEvaluator.h>


namespace tomato {


std::any ScriptEvaluator::visitExpr(ScriptParser::ExprContext *ctx) {
    if (ctx->bop && ctx->expr().size() >=2) {
        std::any l_res = visitExpr(ctx->expr(0));
        std::any r_res = visitExpr(ctx->expr(1));

        switch (ctx->bop->getType()) {
        case ScriptParser::ADD:
            return std::any_cast<int>(l_res) + std::any_cast<int>(r_res);
        case ScriptParser::SUB:
            return std::any_cast<int>(l_res) - std::any_cast<int>(r_res);
        case ScriptParser::MUL:
            return std::any_cast<int>(l_res) * std::any_cast<int>(r_res); 
        case ScriptParser::DIV:
            return std::any_cast<int>(l_res) / std::any_cast<int>(r_res); 
        case ScriptParser::MOD:
            return std::any_cast<int>(l_res) % std::any_cast<int>(r_res); 
        }
        return nullptr;
    }
    
    if (ctx->primary()) {
        return visitPrimary(ctx->primary());
    }

    return nullptr;
}

std::any ScriptEvaluator::visitPrimary(ScriptParser::PrimaryContext *ctx) {
    if (ctx->LPAREN() && ctx->RPAREN()) {
        return visitExpr(ctx->expr());
    }
    if (ctx->STRING_LITERAL()) {
        return ctx->getText();
    }
    if (ctx->DECIMAL_LITERAL()) {
        return std::stoi(ctx->getText());
    }
    return nullptr;
}


};