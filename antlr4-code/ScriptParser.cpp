
// Generated from ../antlr4-code/Script.g4 by ANTLR 4.12.0


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
      "statement", "block", "variableDeclarator", "type", "primitiveType", 
      "exprList", "expr", "funcDef", "funcCall", "primary"
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
  	4,1,112,155,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,29,8,0,1,0,
  	1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,41,8,0,1,0,1,0,3,0,45,8,0,1,0,
  	1,0,3,0,49,8,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,72,8,0,1,1,1,1,1,1,1,1,1,1,5,1,79,8,
  	1,10,1,12,1,82,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,3,3,93,8,3,1,4,
  	1,4,1,5,1,5,1,5,5,5,100,8,5,10,5,12,5,103,9,5,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,123,8,6,10,6,12,6,
  	126,9,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,5,8,135,8,8,10,8,12,8,138,9,8,3,8,
  	140,8,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,153,8,9,1,9,0,
  	1,12,10,0,2,4,6,8,10,12,14,16,18,0,5,9,0,3,3,5,5,8,8,14,14,20,20,27,27,
  	29,29,37,37,48,48,2,0,88,89,93,93,1,0,86,87,2,0,72,73,78,81,1,0,82,83,
  	173,0,71,1,0,0,0,2,73,1,0,0,0,4,85,1,0,0,0,6,92,1,0,0,0,8,94,1,0,0,0,
  	10,96,1,0,0,0,12,104,1,0,0,0,14,127,1,0,0,0,16,129,1,0,0,0,18,152,1,0,
  	0,0,20,72,3,2,1,0,21,22,5,22,0,0,22,23,5,62,0,0,23,24,3,12,6,0,24,25,
  	5,63,0,0,25,28,3,0,0,0,26,27,5,15,0,0,27,29,3,0,0,0,28,26,1,0,0,0,28,
  	29,1,0,0,0,29,72,1,0,0,0,30,31,5,50,0,0,31,32,5,62,0,0,32,33,3,12,6,0,
  	33,34,5,63,0,0,34,35,3,0,0,0,35,72,1,0,0,0,36,37,5,21,0,0,37,40,5,62,
  	0,0,38,41,3,4,2,0,39,41,3,12,6,0,40,38,1,0,0,0,40,39,1,0,0,0,40,41,1,
  	0,0,0,41,42,1,0,0,0,42,44,5,68,0,0,43,45,3,12,6,0,44,43,1,0,0,0,44,45,
  	1,0,0,0,45,46,1,0,0,0,46,48,5,68,0,0,47,49,3,10,5,0,48,47,1,0,0,0,48,
  	49,1,0,0,0,49,50,1,0,0,0,50,51,5,63,0,0,51,72,3,0,0,0,52,53,5,13,0,0,
  	53,54,3,0,0,0,54,55,5,50,0,0,55,56,5,62,0,0,56,57,3,12,6,0,57,58,5,63,
  	0,0,58,59,5,68,0,0,59,72,1,0,0,0,60,61,5,36,0,0,61,62,3,12,6,0,62,63,
  	5,68,0,0,63,72,1,0,0,0,64,65,5,4,0,0,65,72,5,68,0,0,66,67,5,11,0,0,67,
  	72,5,68,0,0,68,69,3,12,6,0,69,70,5,68,0,0,70,72,1,0,0,0,71,20,1,0,0,0,
  	71,21,1,0,0,0,71,30,1,0,0,0,71,36,1,0,0,0,71,52,1,0,0,0,71,60,1,0,0,0,
  	71,64,1,0,0,0,71,66,1,0,0,0,71,68,1,0,0,0,72,1,1,0,0,0,73,80,5,64,0,0,
  	74,75,3,4,2,0,75,76,5,68,0,0,76,79,1,0,0,0,77,79,3,0,0,0,78,74,1,0,0,
  	0,78,77,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,83,1,0,0,
  	0,82,80,1,0,0,0,83,84,5,65,0,0,84,3,1,0,0,0,85,86,3,6,3,0,86,87,5,112,
  	0,0,87,88,5,71,0,0,88,89,3,12,6,0,89,5,1,0,0,0,90,93,5,112,0,0,91,93,
  	3,8,4,0,92,90,1,0,0,0,92,91,1,0,0,0,93,7,1,0,0,0,94,95,7,0,0,0,95,9,1,
  	0,0,0,96,101,3,12,6,0,97,98,5,69,0,0,98,100,3,12,6,0,99,97,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,11,1,0,0,0,103,101,1,0,
  	0,0,104,105,6,6,-1,0,105,106,3,18,9,0,106,124,1,0,0,0,107,108,10,4,0,
  	0,108,109,7,1,0,0,109,123,3,12,6,5,110,111,10,3,0,0,111,112,7,2,0,0,112,
  	123,3,12,6,4,113,114,10,2,0,0,114,115,7,3,0,0,115,123,3,12,6,3,116,117,
  	10,1,0,0,117,118,7,4,0,0,118,123,3,12,6,2,119,120,10,5,0,0,120,121,5,
  	70,0,0,121,123,3,16,8,0,122,107,1,0,0,0,122,110,1,0,0,0,122,113,1,0,0,
  	0,122,116,1,0,0,0,122,119,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,0,124,
  	125,1,0,0,0,125,13,1,0,0,0,126,124,1,0,0,0,127,128,1,0,0,0,128,15,1,0,
  	0,0,129,130,3,12,6,0,130,139,5,62,0,0,131,136,3,12,6,0,132,133,5,69,0,
  	0,133,135,3,12,6,0,134,132,1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,0,136,
  	137,1,0,0,0,137,140,1,0,0,0,138,136,1,0,0,0,139,131,1,0,0,0,139,140,1,
  	0,0,0,140,141,1,0,0,0,141,142,5,63,0,0,142,17,1,0,0,0,143,153,5,52,0,
  	0,144,153,5,60,0,0,145,153,5,112,0,0,146,153,5,58,0,0,147,153,5,61,0,
  	0,148,149,5,62,0,0,149,150,3,12,6,0,150,151,5,63,0,0,151,153,1,0,0,0,
  	152,143,1,0,0,0,152,144,1,0,0,0,152,145,1,0,0,0,152,146,1,0,0,0,152,147,
  	1,0,0,0,152,148,1,0,0,0,153,19,1,0,0,0,14,28,40,44,48,71,78,80,92,101,
  	122,124,136,139,152
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


//----------------- StatementContext ------------------------------------------------------------------

ScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptParser::BlockContext* ScriptParser::StatementContext::block() {
  return getRuleContext<ScriptParser::BlockContext>(0);
}

tree::TerminalNode* ScriptParser::StatementContext::IF() {
  return getToken(ScriptParser::IF, 0);
}

tree::TerminalNode* ScriptParser::StatementContext::LPAREN() {
  return getToken(ScriptParser::LPAREN, 0);
}

std::vector<ScriptParser::ExprContext *> ScriptParser::StatementContext::expr() {
  return getRuleContexts<ScriptParser::ExprContext>();
}

ScriptParser::ExprContext* ScriptParser::StatementContext::expr(size_t i) {
  return getRuleContext<ScriptParser::ExprContext>(i);
}

tree::TerminalNode* ScriptParser::StatementContext::RPAREN() {
  return getToken(ScriptParser::RPAREN, 0);
}

std::vector<ScriptParser::StatementContext *> ScriptParser::StatementContext::statement() {
  return getRuleContexts<ScriptParser::StatementContext>();
}

ScriptParser::StatementContext* ScriptParser::StatementContext::statement(size_t i) {
  return getRuleContext<ScriptParser::StatementContext>(i);
}

tree::TerminalNode* ScriptParser::StatementContext::ELSE() {
  return getToken(ScriptParser::ELSE, 0);
}

tree::TerminalNode* ScriptParser::StatementContext::WHILE() {
  return getToken(ScriptParser::WHILE, 0);
}

tree::TerminalNode* ScriptParser::StatementContext::FOR() {
  return getToken(ScriptParser::FOR, 0);
}

std::vector<tree::TerminalNode *> ScriptParser::StatementContext::SEMI() {
  return getTokens(ScriptParser::SEMI);
}

tree::TerminalNode* ScriptParser::StatementContext::SEMI(size_t i) {
  return getToken(ScriptParser::SEMI, i);
}

ScriptParser::VariableDeclaratorContext* ScriptParser::StatementContext::variableDeclarator() {
  return getRuleContext<ScriptParser::VariableDeclaratorContext>(0);
}

ScriptParser::ExprListContext* ScriptParser::StatementContext::exprList() {
  return getRuleContext<ScriptParser::ExprListContext>(0);
}

tree::TerminalNode* ScriptParser::StatementContext::DO() {
  return getToken(ScriptParser::DO, 0);
}

tree::TerminalNode* ScriptParser::StatementContext::RETURN() {
  return getToken(ScriptParser::RETURN, 0);
}

tree::TerminalNode* ScriptParser::StatementContext::BREAK() {
  return getToken(ScriptParser::BREAK, 0);
}

tree::TerminalNode* ScriptParser::StatementContext::CONTINUE() {
  return getToken(ScriptParser::CONTINUE, 0);
}


size_t ScriptParser::StatementContext::getRuleIndex() const {
  return ScriptParser::RuleStatement;
}

void ScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any ScriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::StatementContext* ScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 0, ScriptParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ScriptParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(20);
        block();
        break;
      }

      case ScriptParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(21);
        match(ScriptParser::IF);
        setState(22);
        match(ScriptParser::LPAREN);
        setState(23);
        expr(0);
        setState(24);
        match(ScriptParser::RPAREN);
        setState(25);
        statement();
        setState(28);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          setState(26);
          match(ScriptParser::ELSE);
          setState(27);
          statement();
          break;
        }

        default:
          break;
        }
        break;
      }

      case ScriptParser::WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(30);
        match(ScriptParser::WHILE);
        setState(31);
        match(ScriptParser::LPAREN);
        setState(32);
        expr(0);
        setState(33);
        match(ScriptParser::RPAREN);
        setState(34);
        statement();
        break;
      }

      case ScriptParser::FOR: {
        enterOuterAlt(_localctx, 4);
        setState(36);
        match(ScriptParser::FOR);
        setState(37);
        match(ScriptParser::LPAREN);
        setState(40);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(38);
          variableDeclarator();
          break;
        }

        case 2: {
          setState(39);
          expr(0);
          break;
        }

        default:
          break;
        }
        setState(42);
        match(ScriptParser::SEMI);
        setState(44);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 52) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 52)) & 1152921504606848833) != 0)) {
          setState(43);
          expr(0);
        }
        setState(46);
        match(ScriptParser::SEMI);
        setState(48);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 52) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 52)) & 1152921504606848833) != 0)) {
          setState(47);
          exprList();
        }
        setState(50);
        match(ScriptParser::RPAREN);
        setState(51);
        statement();
        break;
      }

      case ScriptParser::DO: {
        enterOuterAlt(_localctx, 5);
        setState(52);
        match(ScriptParser::DO);
        setState(53);
        statement();
        setState(54);
        match(ScriptParser::WHILE);
        setState(55);
        match(ScriptParser::LPAREN);
        setState(56);
        expr(0);
        setState(57);
        match(ScriptParser::RPAREN);
        setState(58);
        match(ScriptParser::SEMI);
        break;
      }

      case ScriptParser::RETURN: {
        enterOuterAlt(_localctx, 6);
        setState(60);
        match(ScriptParser::RETURN);
        setState(61);
        expr(0);
        setState(62);
        match(ScriptParser::SEMI);
        break;
      }

      case ScriptParser::BREAK: {
        enterOuterAlt(_localctx, 7);
        setState(64);
        match(ScriptParser::BREAK);
        setState(65);
        match(ScriptParser::SEMI);
        break;
      }

      case ScriptParser::CONTINUE: {
        enterOuterAlt(_localctx, 8);
        setState(66);
        match(ScriptParser::CONTINUE);
        setState(67);
        match(ScriptParser::SEMI);
        break;
      }

      case ScriptParser::DECIMAL_LITERAL:
      case ScriptParser::BOOL_LITERAL:
      case ScriptParser::STRING_LITERAL:
      case ScriptParser::NULL_LITERAL:
      case ScriptParser::LPAREN:
      case ScriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 9);
        setState(68);
        expr(0);
        setState(69);
        match(ScriptParser::SEMI);
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

//----------------- BlockContext ------------------------------------------------------------------

ScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ScriptParser::BlockContext::LBRACE() {
  return getToken(ScriptParser::LBRACE, 0);
}

tree::TerminalNode* ScriptParser::BlockContext::RBRACE() {
  return getToken(ScriptParser::RBRACE, 0);
}

std::vector<ScriptParser::VariableDeclaratorContext *> ScriptParser::BlockContext::variableDeclarator() {
  return getRuleContexts<ScriptParser::VariableDeclaratorContext>();
}

ScriptParser::VariableDeclaratorContext* ScriptParser::BlockContext::variableDeclarator(size_t i) {
  return getRuleContext<ScriptParser::VariableDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> ScriptParser::BlockContext::SEMI() {
  return getTokens(ScriptParser::SEMI);
}

tree::TerminalNode* ScriptParser::BlockContext::SEMI(size_t i) {
  return getToken(ScriptParser::SEMI, i);
}

std::vector<ScriptParser::StatementContext *> ScriptParser::BlockContext::statement() {
  return getRuleContexts<ScriptParser::StatementContext>();
}

ScriptParser::StatementContext* ScriptParser::BlockContext::statement(size_t i) {
  return getRuleContext<ScriptParser::StatementContext>(i);
}


size_t ScriptParser::BlockContext::getRuleIndex() const {
  return ScriptParser::RuleBlock;
}

void ScriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ScriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any ScriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::BlockContext* ScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, ScriptParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(ScriptParser::LBRACE);
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8364592089747450168) != 0) || _la == ScriptParser::LBRACE

    || _la == ScriptParser::IDENTIFIER) {
      setState(78);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(74);
        variableDeclarator();
        setState(75);
        match(ScriptParser::SEMI);
        break;
      }

      case 2: {
        setState(77);
        statement();
        break;
      }

      default:
        break;
      }
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(83);
    match(ScriptParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclaratorContext ------------------------------------------------------------------

ScriptParser::VariableDeclaratorContext::VariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ScriptParser::TypeContext* ScriptParser::VariableDeclaratorContext::type() {
  return getRuleContext<ScriptParser::TypeContext>(0);
}

tree::TerminalNode* ScriptParser::VariableDeclaratorContext::IDENTIFIER() {
  return getToken(ScriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* ScriptParser::VariableDeclaratorContext::ASSIGN() {
  return getToken(ScriptParser::ASSIGN, 0);
}

ScriptParser::ExprContext* ScriptParser::VariableDeclaratorContext::expr() {
  return getRuleContext<ScriptParser::ExprContext>(0);
}


size_t ScriptParser::VariableDeclaratorContext::getRuleIndex() const {
  return ScriptParser::RuleVariableDeclarator;
}

void ScriptParser::VariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarator(this);
}

void ScriptParser::VariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarator(this);
}


std::any ScriptParser::VariableDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::VariableDeclaratorContext* ScriptParser::variableDeclarator() {
  VariableDeclaratorContext *_localctx = _tracker.createInstance<VariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 4, ScriptParser::RuleVariableDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    type();
    setState(86);
    match(ScriptParser::IDENTIFIER);
    setState(87);
    match(ScriptParser::ASSIGN);
    setState(88);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ScriptParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ScriptParser::TypeContext::IDENTIFIER() {
  return getToken(ScriptParser::IDENTIFIER, 0);
}

ScriptParser::PrimitiveTypeContext* ScriptParser::TypeContext::primitiveType() {
  return getRuleContext<ScriptParser::PrimitiveTypeContext>(0);
}


size_t ScriptParser::TypeContext::getRuleIndex() const {
  return ScriptParser::RuleType;
}

void ScriptParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void ScriptParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any ScriptParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::TypeContext* ScriptParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 6, ScriptParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ScriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(90);
        match(ScriptParser::IDENTIFIER);
        break;
      }

      case ScriptParser::BOOLEAN:
      case ScriptParser::BYTE:
      case ScriptParser::CHAR:
      case ScriptParser::DOUBLE:
      case ScriptParser::FLOAT:
      case ScriptParser::INT:
      case ScriptParser::LONG:
      case ScriptParser::SHORT:
      case ScriptParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(91);
        primitiveType();
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

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

ScriptParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::BOOLEAN() {
  return getToken(ScriptParser::BOOLEAN, 0);
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::CHAR() {
  return getToken(ScriptParser::CHAR, 0);
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::BYTE() {
  return getToken(ScriptParser::BYTE, 0);
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::SHORT() {
  return getToken(ScriptParser::SHORT, 0);
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::INT() {
  return getToken(ScriptParser::INT, 0);
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::LONG() {
  return getToken(ScriptParser::LONG, 0);
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::FLOAT() {
  return getToken(ScriptParser::FLOAT, 0);
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::DOUBLE() {
  return getToken(ScriptParser::DOUBLE, 0);
}

tree::TerminalNode* ScriptParser::PrimitiveTypeContext::VOID() {
  return getToken(ScriptParser::VOID, 0);
}


size_t ScriptParser::PrimitiveTypeContext::getRuleIndex() const {
  return ScriptParser::RulePrimitiveType;
}

void ScriptParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void ScriptParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}


std::any ScriptParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::PrimitiveTypeContext* ScriptParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, ScriptParser::RulePrimitiveType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 281613087818024) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprListContext ------------------------------------------------------------------

ScriptParser::ExprListContext::ExprListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptParser::ExprContext *> ScriptParser::ExprListContext::expr() {
  return getRuleContexts<ScriptParser::ExprContext>();
}

ScriptParser::ExprContext* ScriptParser::ExprListContext::expr(size_t i) {
  return getRuleContext<ScriptParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ScriptParser::ExprListContext::COMMA() {
  return getTokens(ScriptParser::COMMA);
}

tree::TerminalNode* ScriptParser::ExprListContext::COMMA(size_t i) {
  return getToken(ScriptParser::COMMA, i);
}


size_t ScriptParser::ExprListContext::getRuleIndex() const {
  return ScriptParser::RuleExprList;
}

void ScriptParser::ExprListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprList(this);
}

void ScriptParser::ExprListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprList(this);
}


std::any ScriptParser::ExprListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitExprList(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::ExprListContext* ScriptParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 10, ScriptParser::RuleExprList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    expr(0);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ScriptParser::COMMA) {
      setState(97);
      match(ScriptParser::COMMA);
      setState(98);
      expr(0);
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
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

tree::TerminalNode* ScriptParser::ExprContext::DOT() {
  return getToken(ScriptParser::DOT, 0);
}

ScriptParser::FuncCallContext* ScriptParser::ExprContext::funcCall() {
  return getRuleContext<ScriptParser::FuncCallContext>(0);
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
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, ScriptParser::RuleExpr, precedence);

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
    setState(105);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(124);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(122);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(107);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(108);
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
          setState(109);
          expr(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(110);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(111);
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
          setState(112);
          expr(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(113);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(114);
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
          setState(115);
          expr(3);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(116);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(117);
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
          setState(118);
          expr(2);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(119);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(120);
          antlrcpp::downCast<ExprContext *>(_localctx)->bop = match(ScriptParser::DOT);

          setState(121);
          funcCall();
          break;
        }

        default:
          break;
        } 
      }
      setState(126);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

ScriptParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ScriptParser::FuncDefContext::getRuleIndex() const {
  return ScriptParser::RuleFuncDef;
}

void ScriptParser::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}

void ScriptParser::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}


std::any ScriptParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::FuncDefContext* ScriptParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 14, ScriptParser::RuleFuncDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallContext ------------------------------------------------------------------

ScriptParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ScriptParser::ExprContext *> ScriptParser::FuncCallContext::expr() {
  return getRuleContexts<ScriptParser::ExprContext>();
}

ScriptParser::ExprContext* ScriptParser::FuncCallContext::expr(size_t i) {
  return getRuleContext<ScriptParser::ExprContext>(i);
}

tree::TerminalNode* ScriptParser::FuncCallContext::LPAREN() {
  return getToken(ScriptParser::LPAREN, 0);
}

tree::TerminalNode* ScriptParser::FuncCallContext::RPAREN() {
  return getToken(ScriptParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ScriptParser::FuncCallContext::COMMA() {
  return getTokens(ScriptParser::COMMA);
}

tree::TerminalNode* ScriptParser::FuncCallContext::COMMA(size_t i) {
  return getToken(ScriptParser::COMMA, i);
}


size_t ScriptParser::FuncCallContext::getRuleIndex() const {
  return ScriptParser::RuleFuncCall;
}

void ScriptParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}

void ScriptParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}


std::any ScriptParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ScriptVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}

ScriptParser::FuncCallContext* ScriptParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 16, ScriptParser::RuleFuncCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    expr(0);
    setState(130);
    match(ScriptParser::LPAREN);
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 52) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 52)) & 1152921504606848833) != 0)) {
      setState(131);
      expr(0);
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ScriptParser::COMMA) {
        setState(132);
        match(ScriptParser::COMMA);
        setState(133);
        expr(0);
        setState(138);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(141);
    match(ScriptParser::RPAREN);
   
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

tree::TerminalNode* ScriptParser::PrimaryContext::BOOL_LITERAL() {
  return getToken(ScriptParser::BOOL_LITERAL, 0);
}

tree::TerminalNode* ScriptParser::PrimaryContext::NULL_LITERAL() {
  return getToken(ScriptParser::NULL_LITERAL, 0);
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
  enterRule(_localctx, 18, ScriptParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ScriptParser::DECIMAL_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(143);
        match(ScriptParser::DECIMAL_LITERAL);
        break;
      }

      case ScriptParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(144);
        match(ScriptParser::STRING_LITERAL);
        break;
      }

      case ScriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(145);
        match(ScriptParser::IDENTIFIER);
        break;
      }

      case ScriptParser::BOOL_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(146);
        match(ScriptParser::BOOL_LITERAL);
        break;
      }

      case ScriptParser::NULL_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(147);
        match(ScriptParser::NULL_LITERAL);
        break;
      }

      case ScriptParser::LPAREN: {
        enterOuterAlt(_localctx, 6);
        setState(148);
        match(ScriptParser::LPAREN);
        setState(149);
        expr(0);
        setState(150);
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
    case 6: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
    case 4: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

void ScriptParser::initialize() {
  ::antlr4::internal::call_once(scriptParserOnceFlag, scriptParserInitialize);
}
