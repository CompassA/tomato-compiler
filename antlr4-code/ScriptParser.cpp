
// Generated from Script.g4 by ANTLR 4.12.0


#include "ScriptListener.h"
#include "ScriptVisitor.h"

#include "ScriptParser.h"


using namespace antlrcpp;
using namespace tomato;

using namespace antlr4;

namespace {

struct ScriptParserStaticData final {
  ScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ScriptParserStaticData(const ScriptParserStaticData&) = delete;
  ScriptParserStaticData(ScriptParserStaticData&&) = delete;
  ScriptParserStaticData& operator=(const ScriptParserStaticData&) = delete;
  ScriptParserStaticData& operator=(ScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag scriptParserOnceFlag;
ScriptParserStaticData *scriptParserStaticData = nullptr;

void scriptParserInitialize() {
  assert(scriptParserStaticData == nullptr);
  auto staticData = std::make_unique<ScriptParserStaticData>(
    std::vector<std::string>{
      "expr", "primary"
    },
    std::vector<std::string>{
      "", "'abstract'", "'assert'", "'boolean'", "'break'", "'byte'", "'case'", 
      "'catch'", "'char'", "'class'", "'const'", "'continue'", "'default'", 
      "'do'", "'double'", "'else'", "'enum'", "'extends'", "'final'", "'finally'", 
      "'float'", "'for'", "'if'", "'goto'", "'implements'", "'import'", 
      "'instanceof'", "'int'", "'interface'", "'long'", "'native'", "'new'", 
      "'package'", "'private'", "'protected'", "'public'", "'return'", "'short'", 
      "'static'", "'strictfp'", "'super'", "'switch'", "'synchronized'", 
      "'this'", "'throw'", "'throws'", "'transient'", "'try'", "'void'", 
      "'volatile'", "'while'", "'function'", "", "", "", "", "", "", "", 
      "", "", "'null'", "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", 
      "','", "'.'", "'='", "'>'", "'<'", "'!'", "'~'", "'\\u003F'", "':'", 
      "'=='", "'<='", "'>='", "'!='", "'&&'", "'||'", "'++'", "'--'", "'+'", 
      "'-'", "'*'", "'/'", "'&'", "'|'", "'^'", "'%'", "'+='", "'-='", "'*='", 
      "'/='", "'&='", "'|='", "'^='", "'%='", "'<<='", "'>>='", "'>>>='", 
      "'->'", "'::'", "'@'", "'...'"
    },
    std::vector<std::string>{
      "", "ABSTRACT", "ASSERT", "BOOLEAN", "BREAK", "BYTE", "CASE", "CATCH", 
      "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", 
      "ENUM", "EXTENDS", "FINAL", "FINALLY", "FLOAT", "FOR", "IF", "GOTO", 
      "IMPLEMENTS", "IMPORT", "INSTANCEOF", "INT", "INTERFACE", "LONG", 
      "NATIVE", "NEW", "PACKAGE", "PRIVATE", "PROTECTED", "PUBLIC", "RETURN", 
      "SHORT", "STATIC", "STRICTFP", "SUPER", "SWITCH", "SYNCHRONIZED", 
      "THIS", "THROW", "THROWS", "TRANSIENT", "TRY", "VOID", "VOLATILE", 
      "WHILE", "FUNCTION", "DECIMAL_LITERAL", "HEX_LITERAL", "OCT_LITERAL", 
      "BINARY_LITERAL", "FLOAT_LITERAL", "HEX_FLOAT_LITERAL", "BOOL_LITERAL", 
      "CHAR_LITERAL", "STRING_LITERAL", "NULL_LITERAL", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COMMA", "DOT", "ASSIGN", 
      "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", "LE", "GE", 
      "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", "DIV", 
      "BITAND", "BITOR", "CARET", "MOD", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", 
      "DIV_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "MOD_ASSIGN", 
      "LSHIFT_ASSIGN", "RSHIFT_ASSIGN", "URSHIFT_ASSIGN", "ARROW", "COLONCOLON", 
      "AT", "ELLIPSIS", "WS", "COMMENT", "LINE_COMMENT", "IDENTIFIER"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,112,34,2,0,7,0,2,1,7,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,5,0,20,8,0,10,0,12,0,23,9,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,3,1,32,8,1,1,1,0,1,0,2,0,2,0,4,2,0,88,89,93,93,1,0,86,87,2,0,72,73,
  	78,81,1,0,82,83,38,0,4,1,0,0,0,2,31,1,0,0,0,4,5,6,0,-1,0,5,6,3,2,1,0,
  	6,21,1,0,0,0,7,8,10,4,0,0,8,9,7,0,0,0,9,20,3,0,0,5,10,11,10,3,0,0,11,
  	12,7,1,0,0,12,20,3,0,0,4,13,14,10,2,0,0,14,15,7,2,0,0,15,20,3,0,0,3,16,
  	17,10,1,0,0,17,18,7,3,0,0,18,20,3,0,0,2,19,7,1,0,0,0,19,10,1,0,0,0,19,
  	13,1,0,0,0,19,16,1,0,0,0,20,23,1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,
  	1,1,0,0,0,23,21,1,0,0,0,24,32,5,52,0,0,25,32,5,60,0,0,26,32,5,112,0,0,
  	27,28,5,62,0,0,28,29,3,0,0,0,29,30,5,63,0,0,30,32,1,0,0,0,31,24,1,0,0,
  	0,31,25,1,0,0,0,31,26,1,0,0,0,31,27,1,0,0,0,32,3,1,0,0,0,3,19,21,31
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  scriptParserStaticData = staticData.release();
}

}

ScriptParser::ScriptParser(TokenStream *input) : ScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ScriptParser::ScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *scriptParserStaticData->atn, scriptParserStaticData->decisionToDFA, scriptParserStaticData->sharedContextCache, options);
}

ScriptParser::~ScriptParser() {
  delete _interpreter;
}

const atn::ATN& ScriptParser::getATN() const {
  return *scriptParserStaticData->atn;
}

std::string ScriptParser::getGrammarFileName() const {
  return "Script.g4";
}

const std::vector<std::string>& ScriptParser::getRuleNames() const {
  return scriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& ScriptParser::getVocabulary() const {
  return scriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ScriptParser::getSerializedATN() const {
  return scriptParserStaticData->serializedATN;
}


//----------------- ExprContext ------------------------------------------------------------------

ScriptParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptParser::PrimaryContext* ScriptParser::ExprContext::primary() {
  return getRuleContext<ScriptParser::PrimaryContext>(0);
}

std::vector<ScriptParser::ExprContext *> ScriptParser::ExprContext::expr() {
  return getRuleContexts<ScriptParser::ExprContext>();
}

ScriptParser::ExprContext* ScriptParser::ExprContext::expr(size_t i) {
  return getRuleContext<ScriptParser::ExprContext>(i);
}

tree::TerminalNode* ScriptParser::ExprContext::MUL() {
  return getToken(ScriptParser::MUL, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::DIV() {
  return getToken(ScriptParser::DIV, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::MOD() {
  return getToken(ScriptParser::MOD, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::ADD() {
  return getToken(ScriptParser::ADD, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::SUB() {
  return getToken(ScriptParser::SUB, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::GT() {
  return getToken(ScriptParser::GT, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::LT() {
  return getToken(ScriptParser::LT, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::LE() {
  return getToken(ScriptParser::LE, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::GE() {
  return getToken(ScriptParser::GE, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::EQUAL() {
  return getToken(ScriptParser::EQUAL, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::NOTEQUAL() {
  return getToken(ScriptParser::NOTEQUAL, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::AND() {
  return getToken(ScriptParser::AND, 0);
}

tree::TerminalNode* ScriptParser::ExprContext::OR() {
  return getToken(ScriptParser::OR, 0);
}


size_t ScriptParser::ExprContext::getRuleIndex() const {
  return ScriptParser::RuleExpr;
}

void ScriptParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void ScriptParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any ScriptParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


ScriptParser::ExprContext* ScriptParser::expr() {
   return expr(0);
}

ScriptParser::ExprContext* ScriptParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ScriptParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ScriptParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, ScriptParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(5);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(21);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(19);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(7);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(8);
          antlrcpp::downCast<ExprContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 88) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 88)) & 35) != 0))) {
            antlrcpp::downCast<ExprContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(9);
          expr(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(10);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(11);
          antlrcpp::downCast<ExprContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ScriptParser::ADD

          || _la == ScriptParser::SUB)) {
            antlrcpp::downCast<ExprContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(12);
          expr(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(13);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(14);
          antlrcpp::downCast<ExprContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 72) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 72)) & 963) != 0))) {
            antlrcpp::downCast<ExprContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(15);
          expr(3);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(16);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(17);
          antlrcpp::downCast<ExprContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ScriptParser::AND

          || _la == ScriptParser::OR)) {
            antlrcpp::downCast<ExprContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(18);
          expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(23);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

ScriptParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ScriptParser::PrimaryContext::DECIMAL_LITERAL() {
  return getToken(ScriptParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode* ScriptParser::PrimaryContext::STRING_LITERAL() {
  return getToken(ScriptParser::STRING_LITERAL, 0);
}

tree::TerminalNode* ScriptParser::PrimaryContext::IDENTIFIER() {
  return getToken(ScriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* ScriptParser::PrimaryContext::LPAREN() {
  return getToken(ScriptParser::LPAREN, 0);
}

ScriptParser::ExprContext* ScriptParser::PrimaryContext::expr() {
  return getRuleContext<ScriptParser::ExprContext>(0);
}

tree::TerminalNode* ScriptParser::PrimaryContext::RPAREN() {
  return getToken(ScriptParser::RPAREN, 0);
}


size_t ScriptParser::PrimaryContext::getRuleIndex() const {
  return ScriptParser::RulePrimary;
}

void ScriptParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void ScriptParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


std::any ScriptParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::PrimaryContext* ScriptParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 2, ScriptParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ScriptParser::DECIMAL_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(24);
        match(ScriptParser::DECIMAL_LITERAL);
        break;
      }

      case ScriptParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(25);
        match(ScriptParser::STRING_LITERAL);
        break;
      }

      case ScriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(26);
        match(ScriptParser::IDENTIFIER);
        break;
      }

      case ScriptParser::LPAREN: {
        enterOuterAlt(_localctx, 4);
        setState(27);
        match(ScriptParser::LPAREN);
        setState(28);
        expr(0);
        setState(29);
        match(ScriptParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ScriptParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void ScriptParser::initialize() {
  ::antlr4::internal::call_once(scriptParserOnceFlag, scriptParserInitialize);
}
