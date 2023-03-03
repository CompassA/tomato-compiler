
// Generated from Script.g4 by ANTLR 4.12.0


#include "ScriptLexer.h"


using namespace antlr4;

using namespace tomato;


using namespace antlr4;

namespace {

struct ScriptLexerStaticData final {
  ScriptLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ScriptLexerStaticData(const ScriptLexerStaticData&) = delete;
  ScriptLexerStaticData(ScriptLexerStaticData&&) = delete;
  ScriptLexerStaticData& operator=(const ScriptLexerStaticData&) = delete;
  ScriptLexerStaticData& operator=(ScriptLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag scriptlexerLexerOnceFlag;
ScriptLexerStaticData *scriptlexerLexerStaticData = nullptr;

void scriptlexerLexerInitialize() {
  assert(scriptlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<ScriptLexerStaticData>(
    std::vector<std::string>{
      "ABSTRACT", "ASSERT", "BOOLEAN", "BREAK", "BYTE", "CASE", "CATCH", 
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
      "AT", "ELLIPSIS", "WS", "COMMENT", "LINE_COMMENT", "IDENTIFIER", "ExponentPart", 
      "EscapeSequence", "HexDigits", "HexDigit", "Digits", "LetterOrDigit", 
      "Letter"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,112,956,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,
  	7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,
  	14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,
  	21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,
  	28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,
  	35,7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,
  	42,7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,
  	49,7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,
  	56,7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,
  	63,7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,
  	70,7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,
  	77,7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,
  	84,7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,
  	91,7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,
  	98,7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,2,112,7,112,2,113,7,113,2,114,7,114,2,115,7,115,2,116,
  	7,116,2,117,7,117,2,118,7,118,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,
  	14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,
  	16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,
  	21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,
  	25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,
  	29,1,29,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,
  	31,1,31,1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,33,1,
  	33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,34,1,
  	34,1,34,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,36,1,
  	36,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,38,1,38,1,
  	38,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,1,40,1,
  	40,1,40,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,
  	41,1,42,1,42,1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,43,1,43,1,44,1,44,1,
  	44,1,44,1,44,1,44,1,44,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,45,1,
  	45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,
  	48,1,48,1,48,1,48,1,48,1,49,1,49,1,49,1,49,1,49,1,49,1,50,1,50,1,50,1,
  	50,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,51,3,51,591,8,51,1,51,4,51,594,
  	8,51,11,51,12,51,595,1,51,3,51,599,8,51,3,51,601,8,51,1,51,3,51,604,8,
  	51,1,52,1,52,1,52,1,52,5,52,610,8,52,10,52,12,52,613,9,52,1,52,3,52,616,
  	8,52,1,52,3,52,619,8,52,1,53,1,53,5,53,623,8,53,10,53,12,53,626,9,53,
  	1,53,1,53,5,53,630,8,53,10,53,12,53,633,9,53,1,53,3,53,636,8,53,1,53,
  	3,53,639,8,53,1,54,1,54,1,54,1,54,5,54,645,8,54,10,54,12,54,648,9,54,
  	1,54,3,54,651,8,54,1,54,3,54,654,8,54,1,55,1,55,1,55,3,55,659,8,55,1,
  	55,1,55,3,55,663,8,55,1,55,3,55,666,8,55,1,55,3,55,669,8,55,1,55,1,55,
  	1,55,3,55,674,8,55,1,55,3,55,677,8,55,3,55,679,8,55,1,56,1,56,1,56,1,
  	56,3,56,685,8,56,1,56,3,56,688,8,56,1,56,1,56,3,56,692,8,56,1,56,1,56,
  	3,56,696,8,56,1,56,1,56,3,56,700,8,56,1,57,1,57,1,57,1,57,1,57,1,57,1,
  	57,1,57,1,57,3,57,711,8,57,1,58,1,58,1,58,3,58,716,8,58,1,58,1,58,1,59,
  	1,59,1,59,5,59,723,8,59,10,59,12,59,726,9,59,1,59,1,59,1,60,1,60,1,60,
  	1,60,1,60,1,61,1,61,1,62,1,62,1,63,1,63,1,64,1,64,1,65,1,65,1,66,1,66,
  	1,67,1,67,1,68,1,68,1,69,1,69,1,70,1,70,1,71,1,71,1,72,1,72,1,73,1,73,
  	1,74,1,74,1,75,1,75,1,76,1,76,1,77,1,77,1,77,1,78,1,78,1,78,1,79,1,79,
  	1,79,1,80,1,80,1,80,1,81,1,81,1,81,1,82,1,82,1,82,1,83,1,83,1,83,1,84,
  	1,84,1,84,1,85,1,85,1,86,1,86,1,87,1,87,1,88,1,88,1,89,1,89,1,90,1,90,
  	1,91,1,91,1,92,1,92,1,93,1,93,1,93,1,94,1,94,1,94,1,95,1,95,1,95,1,96,
  	1,96,1,96,1,97,1,97,1,97,1,98,1,98,1,98,1,99,1,99,1,99,1,100,1,100,1,
  	100,1,101,1,101,1,101,1,101,1,102,1,102,1,102,1,102,1,103,1,103,1,103,
  	1,103,1,103,1,104,1,104,1,104,1,105,1,105,1,105,1,106,1,106,1,107,1,107,
  	1,107,1,107,1,108,4,108,857,8,108,11,108,12,108,858,1,108,1,108,1,109,
  	1,109,1,109,1,109,5,109,867,8,109,10,109,12,109,870,9,109,1,109,1,109,
  	1,109,1,109,1,109,1,110,1,110,1,110,1,110,5,110,881,8,110,10,110,12,110,
  	884,9,110,1,110,1,110,1,111,1,111,5,111,890,8,111,10,111,12,111,893,9,
  	111,1,112,1,112,3,112,897,8,112,1,112,1,112,1,113,1,113,1,113,1,113,3,
  	113,905,8,113,1,113,3,113,908,8,113,1,113,1,113,1,113,4,113,913,8,113,
  	11,113,12,113,914,1,113,1,113,1,113,1,113,1,113,3,113,922,8,113,1,114,
  	1,114,1,114,5,114,927,8,114,10,114,12,114,930,9,114,1,114,3,114,933,8,
  	114,1,115,1,115,1,116,1,116,5,116,939,8,116,10,116,12,116,942,9,116,1,
  	116,3,116,945,8,116,1,117,1,117,3,117,949,8,117,1,118,1,118,1,118,1,118,
  	3,118,955,8,118,1,868,0,119,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,
  	33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,
  	89,45,91,46,93,47,95,48,97,49,99,50,101,51,103,52,105,53,107,54,109,55,
  	111,56,113,57,115,58,117,59,119,60,121,61,123,62,125,63,127,64,129,65,
  	131,66,133,67,135,68,137,69,139,70,141,71,143,72,145,73,147,74,149,75,
  	151,76,153,77,155,78,157,79,159,80,161,81,163,82,165,83,167,84,169,85,
  	171,86,173,87,175,88,177,89,179,90,181,91,183,92,185,93,187,94,189,95,
  	191,96,193,97,195,98,197,99,199,100,201,101,203,102,205,103,207,104,209,
  	105,211,106,213,107,215,108,217,109,219,110,221,111,223,112,225,0,227,
  	0,229,0,231,0,233,0,235,0,237,0,1,0,26,1,0,49,57,2,0,76,76,108,108,2,
  	0,88,88,120,120,3,0,48,57,65,70,97,102,4,0,48,57,65,70,95,95,97,102,1,
  	0,48,55,2,0,48,55,95,95,2,0,66,66,98,98,1,0,48,49,2,0,48,49,95,95,4,0,
  	68,68,70,70,100,100,102,102,2,0,80,80,112,112,2,0,43,43,45,45,4,0,10,
  	10,13,13,39,39,92,92,4,0,10,10,13,13,34,34,92,92,3,0,9,10,12,13,32,32,
  	2,0,10,10,13,13,2,0,69,69,101,101,8,0,34,34,39,39,92,92,98,98,102,102,
  	110,110,114,114,116,116,1,0,48,51,1,0,48,57,2,0,48,57,95,95,4,0,36,36,
  	65,90,95,95,97,122,2,0,0,127,55296,56319,1,0,55296,56319,1,0,56320,57343,
  	997,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,
  	1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,
  	0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,
  	0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,
  	1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,
  	0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,
  	0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,
  	107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,
  	117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,
  	127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,0,
  	137,1,0,0,0,0,139,1,0,0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,0,
  	147,1,0,0,0,0,149,1,0,0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,
  	157,1,0,0,0,0,159,1,0,0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,
  	167,1,0,0,0,0,169,1,0,0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,0,
  	177,1,0,0,0,0,179,1,0,0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,0,
  	187,1,0,0,0,0,189,1,0,0,0,0,191,1,0,0,0,0,193,1,0,0,0,0,195,1,0,0,0,0,
  	197,1,0,0,0,0,199,1,0,0,0,0,201,1,0,0,0,0,203,1,0,0,0,0,205,1,0,0,0,0,
  	207,1,0,0,0,0,209,1,0,0,0,0,211,1,0,0,0,0,213,1,0,0,0,0,215,1,0,0,0,0,
  	217,1,0,0,0,0,219,1,0,0,0,0,221,1,0,0,0,0,223,1,0,0,0,1,239,1,0,0,0,3,
  	248,1,0,0,0,5,255,1,0,0,0,7,263,1,0,0,0,9,269,1,0,0,0,11,274,1,0,0,0,
  	13,279,1,0,0,0,15,285,1,0,0,0,17,290,1,0,0,0,19,296,1,0,0,0,21,302,1,
  	0,0,0,23,311,1,0,0,0,25,319,1,0,0,0,27,322,1,0,0,0,29,329,1,0,0,0,31,
  	334,1,0,0,0,33,339,1,0,0,0,35,347,1,0,0,0,37,353,1,0,0,0,39,361,1,0,0,
  	0,41,367,1,0,0,0,43,371,1,0,0,0,45,374,1,0,0,0,47,379,1,0,0,0,49,390,
  	1,0,0,0,51,397,1,0,0,0,53,408,1,0,0,0,55,412,1,0,0,0,57,422,1,0,0,0,59,
  	427,1,0,0,0,61,434,1,0,0,0,63,438,1,0,0,0,65,446,1,0,0,0,67,454,1,0,0,
  	0,69,464,1,0,0,0,71,471,1,0,0,0,73,478,1,0,0,0,75,484,1,0,0,0,77,491,
  	1,0,0,0,79,500,1,0,0,0,81,506,1,0,0,0,83,513,1,0,0,0,85,526,1,0,0,0,87,
  	531,1,0,0,0,89,537,1,0,0,0,91,544,1,0,0,0,93,554,1,0,0,0,95,558,1,0,0,
  	0,97,563,1,0,0,0,99,572,1,0,0,0,101,578,1,0,0,0,103,600,1,0,0,0,105,605,
  	1,0,0,0,107,620,1,0,0,0,109,640,1,0,0,0,111,678,1,0,0,0,113,680,1,0,0,
  	0,115,710,1,0,0,0,117,712,1,0,0,0,119,719,1,0,0,0,121,729,1,0,0,0,123,
  	734,1,0,0,0,125,736,1,0,0,0,127,738,1,0,0,0,129,740,1,0,0,0,131,742,1,
  	0,0,0,133,744,1,0,0,0,135,746,1,0,0,0,137,748,1,0,0,0,139,750,1,0,0,0,
  	141,752,1,0,0,0,143,754,1,0,0,0,145,756,1,0,0,0,147,758,1,0,0,0,149,760,
  	1,0,0,0,151,762,1,0,0,0,153,764,1,0,0,0,155,766,1,0,0,0,157,769,1,0,0,
  	0,159,772,1,0,0,0,161,775,1,0,0,0,163,778,1,0,0,0,165,781,1,0,0,0,167,
  	784,1,0,0,0,169,787,1,0,0,0,171,790,1,0,0,0,173,792,1,0,0,0,175,794,1,
  	0,0,0,177,796,1,0,0,0,179,798,1,0,0,0,181,800,1,0,0,0,183,802,1,0,0,0,
  	185,804,1,0,0,0,187,806,1,0,0,0,189,809,1,0,0,0,191,812,1,0,0,0,193,815,
  	1,0,0,0,195,818,1,0,0,0,197,821,1,0,0,0,199,824,1,0,0,0,201,827,1,0,0,
  	0,203,830,1,0,0,0,205,834,1,0,0,0,207,838,1,0,0,0,209,843,1,0,0,0,211,
  	846,1,0,0,0,213,849,1,0,0,0,215,851,1,0,0,0,217,856,1,0,0,0,219,862,1,
  	0,0,0,221,876,1,0,0,0,223,887,1,0,0,0,225,894,1,0,0,0,227,921,1,0,0,0,
  	229,923,1,0,0,0,231,934,1,0,0,0,233,936,1,0,0,0,235,948,1,0,0,0,237,954,
  	1,0,0,0,239,240,5,97,0,0,240,241,5,98,0,0,241,242,5,115,0,0,242,243,5,
  	116,0,0,243,244,5,114,0,0,244,245,5,97,0,0,245,246,5,99,0,0,246,247,5,
  	116,0,0,247,2,1,0,0,0,248,249,5,97,0,0,249,250,5,115,0,0,250,251,5,115,
  	0,0,251,252,5,101,0,0,252,253,5,114,0,0,253,254,5,116,0,0,254,4,1,0,0,
  	0,255,256,5,98,0,0,256,257,5,111,0,0,257,258,5,111,0,0,258,259,5,108,
  	0,0,259,260,5,101,0,0,260,261,5,97,0,0,261,262,5,110,0,0,262,6,1,0,0,
  	0,263,264,5,98,0,0,264,265,5,114,0,0,265,266,5,101,0,0,266,267,5,97,0,
  	0,267,268,5,107,0,0,268,8,1,0,0,0,269,270,5,98,0,0,270,271,5,121,0,0,
  	271,272,5,116,0,0,272,273,5,101,0,0,273,10,1,0,0,0,274,275,5,99,0,0,275,
  	276,5,97,0,0,276,277,5,115,0,0,277,278,5,101,0,0,278,12,1,0,0,0,279,280,
  	5,99,0,0,280,281,5,97,0,0,281,282,5,116,0,0,282,283,5,99,0,0,283,284,
  	5,104,0,0,284,14,1,0,0,0,285,286,5,99,0,0,286,287,5,104,0,0,287,288,5,
  	97,0,0,288,289,5,114,0,0,289,16,1,0,0,0,290,291,5,99,0,0,291,292,5,108,
  	0,0,292,293,5,97,0,0,293,294,5,115,0,0,294,295,5,115,0,0,295,18,1,0,0,
  	0,296,297,5,99,0,0,297,298,5,111,0,0,298,299,5,110,0,0,299,300,5,115,
  	0,0,300,301,5,116,0,0,301,20,1,0,0,0,302,303,5,99,0,0,303,304,5,111,0,
  	0,304,305,5,110,0,0,305,306,5,116,0,0,306,307,5,105,0,0,307,308,5,110,
  	0,0,308,309,5,117,0,0,309,310,5,101,0,0,310,22,1,0,0,0,311,312,5,100,
  	0,0,312,313,5,101,0,0,313,314,5,102,0,0,314,315,5,97,0,0,315,316,5,117,
  	0,0,316,317,5,108,0,0,317,318,5,116,0,0,318,24,1,0,0,0,319,320,5,100,
  	0,0,320,321,5,111,0,0,321,26,1,0,0,0,322,323,5,100,0,0,323,324,5,111,
  	0,0,324,325,5,117,0,0,325,326,5,98,0,0,326,327,5,108,0,0,327,328,5,101,
  	0,0,328,28,1,0,0,0,329,330,5,101,0,0,330,331,5,108,0,0,331,332,5,115,
  	0,0,332,333,5,101,0,0,333,30,1,0,0,0,334,335,5,101,0,0,335,336,5,110,
  	0,0,336,337,5,117,0,0,337,338,5,109,0,0,338,32,1,0,0,0,339,340,5,101,
  	0,0,340,341,5,120,0,0,341,342,5,116,0,0,342,343,5,101,0,0,343,344,5,110,
  	0,0,344,345,5,100,0,0,345,346,5,115,0,0,346,34,1,0,0,0,347,348,5,102,
  	0,0,348,349,5,105,0,0,349,350,5,110,0,0,350,351,5,97,0,0,351,352,5,108,
  	0,0,352,36,1,0,0,0,353,354,5,102,0,0,354,355,5,105,0,0,355,356,5,110,
  	0,0,356,357,5,97,0,0,357,358,5,108,0,0,358,359,5,108,0,0,359,360,5,121,
  	0,0,360,38,1,0,0,0,361,362,5,102,0,0,362,363,5,108,0,0,363,364,5,111,
  	0,0,364,365,5,97,0,0,365,366,5,116,0,0,366,40,1,0,0,0,367,368,5,102,0,
  	0,368,369,5,111,0,0,369,370,5,114,0,0,370,42,1,0,0,0,371,372,5,105,0,
  	0,372,373,5,102,0,0,373,44,1,0,0,0,374,375,5,103,0,0,375,376,5,111,0,
  	0,376,377,5,116,0,0,377,378,5,111,0,0,378,46,1,0,0,0,379,380,5,105,0,
  	0,380,381,5,109,0,0,381,382,5,112,0,0,382,383,5,108,0,0,383,384,5,101,
  	0,0,384,385,5,109,0,0,385,386,5,101,0,0,386,387,5,110,0,0,387,388,5,116,
  	0,0,388,389,5,115,0,0,389,48,1,0,0,0,390,391,5,105,0,0,391,392,5,109,
  	0,0,392,393,5,112,0,0,393,394,5,111,0,0,394,395,5,114,0,0,395,396,5,116,
  	0,0,396,50,1,0,0,0,397,398,5,105,0,0,398,399,5,110,0,0,399,400,5,115,
  	0,0,400,401,5,116,0,0,401,402,5,97,0,0,402,403,5,110,0,0,403,404,5,99,
  	0,0,404,405,5,101,0,0,405,406,5,111,0,0,406,407,5,102,0,0,407,52,1,0,
  	0,0,408,409,5,105,0,0,409,410,5,110,0,0,410,411,5,116,0,0,411,54,1,0,
  	0,0,412,413,5,105,0,0,413,414,5,110,0,0,414,415,5,116,0,0,415,416,5,101,
  	0,0,416,417,5,114,0,0,417,418,5,102,0,0,418,419,5,97,0,0,419,420,5,99,
  	0,0,420,421,5,101,0,0,421,56,1,0,0,0,422,423,5,108,0,0,423,424,5,111,
  	0,0,424,425,5,110,0,0,425,426,5,103,0,0,426,58,1,0,0,0,427,428,5,110,
  	0,0,428,429,5,97,0,0,429,430,5,116,0,0,430,431,5,105,0,0,431,432,5,118,
  	0,0,432,433,5,101,0,0,433,60,1,0,0,0,434,435,5,110,0,0,435,436,5,101,
  	0,0,436,437,5,119,0,0,437,62,1,0,0,0,438,439,5,112,0,0,439,440,5,97,0,
  	0,440,441,5,99,0,0,441,442,5,107,0,0,442,443,5,97,0,0,443,444,5,103,0,
  	0,444,445,5,101,0,0,445,64,1,0,0,0,446,447,5,112,0,0,447,448,5,114,0,
  	0,448,449,5,105,0,0,449,450,5,118,0,0,450,451,5,97,0,0,451,452,5,116,
  	0,0,452,453,5,101,0,0,453,66,1,0,0,0,454,455,5,112,0,0,455,456,5,114,
  	0,0,456,457,5,111,0,0,457,458,5,116,0,0,458,459,5,101,0,0,459,460,5,99,
  	0,0,460,461,5,116,0,0,461,462,5,101,0,0,462,463,5,100,0,0,463,68,1,0,
  	0,0,464,465,5,112,0,0,465,466,5,117,0,0,466,467,5,98,0,0,467,468,5,108,
  	0,0,468,469,5,105,0,0,469,470,5,99,0,0,470,70,1,0,0,0,471,472,5,114,0,
  	0,472,473,5,101,0,0,473,474,5,116,0,0,474,475,5,117,0,0,475,476,5,114,
  	0,0,476,477,5,110,0,0,477,72,1,0,0,0,478,479,5,115,0,0,479,480,5,104,
  	0,0,480,481,5,111,0,0,481,482,5,114,0,0,482,483,5,116,0,0,483,74,1,0,
  	0,0,484,485,5,115,0,0,485,486,5,116,0,0,486,487,5,97,0,0,487,488,5,116,
  	0,0,488,489,5,105,0,0,489,490,5,99,0,0,490,76,1,0,0,0,491,492,5,115,0,
  	0,492,493,5,116,0,0,493,494,5,114,0,0,494,495,5,105,0,0,495,496,5,99,
  	0,0,496,497,5,116,0,0,497,498,5,102,0,0,498,499,5,112,0,0,499,78,1,0,
  	0,0,500,501,5,115,0,0,501,502,5,117,0,0,502,503,5,112,0,0,503,504,5,101,
  	0,0,504,505,5,114,0,0,505,80,1,0,0,0,506,507,5,115,0,0,507,508,5,119,
  	0,0,508,509,5,105,0,0,509,510,5,116,0,0,510,511,5,99,0,0,511,512,5,104,
  	0,0,512,82,1,0,0,0,513,514,5,115,0,0,514,515,5,121,0,0,515,516,5,110,
  	0,0,516,517,5,99,0,0,517,518,5,104,0,0,518,519,5,114,0,0,519,520,5,111,
  	0,0,520,521,5,110,0,0,521,522,5,105,0,0,522,523,5,122,0,0,523,524,5,101,
  	0,0,524,525,5,100,0,0,525,84,1,0,0,0,526,527,5,116,0,0,527,528,5,104,
  	0,0,528,529,5,105,0,0,529,530,5,115,0,0,530,86,1,0,0,0,531,532,5,116,
  	0,0,532,533,5,104,0,0,533,534,5,114,0,0,534,535,5,111,0,0,535,536,5,119,
  	0,0,536,88,1,0,0,0,537,538,5,116,0,0,538,539,5,104,0,0,539,540,5,114,
  	0,0,540,541,5,111,0,0,541,542,5,119,0,0,542,543,5,115,0,0,543,90,1,0,
  	0,0,544,545,5,116,0,0,545,546,5,114,0,0,546,547,5,97,0,0,547,548,5,110,
  	0,0,548,549,5,115,0,0,549,550,5,105,0,0,550,551,5,101,0,0,551,552,5,110,
  	0,0,552,553,5,116,0,0,553,92,1,0,0,0,554,555,5,116,0,0,555,556,5,114,
  	0,0,556,557,5,121,0,0,557,94,1,0,0,0,558,559,5,118,0,0,559,560,5,111,
  	0,0,560,561,5,105,0,0,561,562,5,100,0,0,562,96,1,0,0,0,563,564,5,118,
  	0,0,564,565,5,111,0,0,565,566,5,108,0,0,566,567,5,97,0,0,567,568,5,116,
  	0,0,568,569,5,105,0,0,569,570,5,108,0,0,570,571,5,101,0,0,571,98,1,0,
  	0,0,572,573,5,119,0,0,573,574,5,104,0,0,574,575,5,105,0,0,575,576,5,108,
  	0,0,576,577,5,101,0,0,577,100,1,0,0,0,578,579,5,102,0,0,579,580,5,117,
  	0,0,580,581,5,110,0,0,581,582,5,99,0,0,582,583,5,116,0,0,583,584,5,105,
  	0,0,584,585,5,111,0,0,585,586,5,110,0,0,586,102,1,0,0,0,587,601,5,48,
  	0,0,588,598,7,0,0,0,589,591,3,233,116,0,590,589,1,0,0,0,590,591,1,0,0,
  	0,591,599,1,0,0,0,592,594,5,95,0,0,593,592,1,0,0,0,594,595,1,0,0,0,595,
  	593,1,0,0,0,595,596,1,0,0,0,596,597,1,0,0,0,597,599,3,233,116,0,598,590,
  	1,0,0,0,598,593,1,0,0,0,599,601,1,0,0,0,600,587,1,0,0,0,600,588,1,0,0,
  	0,601,603,1,0,0,0,602,604,7,1,0,0,603,602,1,0,0,0,603,604,1,0,0,0,604,
  	104,1,0,0,0,605,606,5,48,0,0,606,607,7,2,0,0,607,615,7,3,0,0,608,610,
  	7,4,0,0,609,608,1,0,0,0,610,613,1,0,0,0,611,609,1,0,0,0,611,612,1,0,0,
  	0,612,614,1,0,0,0,613,611,1,0,0,0,614,616,7,3,0,0,615,611,1,0,0,0,615,
  	616,1,0,0,0,616,618,1,0,0,0,617,619,7,1,0,0,618,617,1,0,0,0,618,619,1,
  	0,0,0,619,106,1,0,0,0,620,624,5,48,0,0,621,623,5,95,0,0,622,621,1,0,0,
  	0,623,626,1,0,0,0,624,622,1,0,0,0,624,625,1,0,0,0,625,627,1,0,0,0,626,
  	624,1,0,0,0,627,635,7,5,0,0,628,630,7,6,0,0,629,628,1,0,0,0,630,633,1,
  	0,0,0,631,629,1,0,0,0,631,632,1,0,0,0,632,634,1,0,0,0,633,631,1,0,0,0,
  	634,636,7,5,0,0,635,631,1,0,0,0,635,636,1,0,0,0,636,638,1,0,0,0,637,639,
  	7,1,0,0,638,637,1,0,0,0,638,639,1,0,0,0,639,108,1,0,0,0,640,641,5,48,
  	0,0,641,642,7,7,0,0,642,650,7,8,0,0,643,645,7,9,0,0,644,643,1,0,0,0,645,
  	648,1,0,0,0,646,644,1,0,0,0,646,647,1,0,0,0,647,649,1,0,0,0,648,646,1,
  	0,0,0,649,651,7,8,0,0,650,646,1,0,0,0,650,651,1,0,0,0,651,653,1,0,0,0,
  	652,654,7,1,0,0,653,652,1,0,0,0,653,654,1,0,0,0,654,110,1,0,0,0,655,656,
  	3,233,116,0,656,658,5,46,0,0,657,659,3,233,116,0,658,657,1,0,0,0,658,
  	659,1,0,0,0,659,663,1,0,0,0,660,661,5,46,0,0,661,663,3,233,116,0,662,
  	655,1,0,0,0,662,660,1,0,0,0,663,665,1,0,0,0,664,666,3,225,112,0,665,664,
  	1,0,0,0,665,666,1,0,0,0,666,668,1,0,0,0,667,669,7,10,0,0,668,667,1,0,
  	0,0,668,669,1,0,0,0,669,679,1,0,0,0,670,676,3,233,116,0,671,673,3,225,
  	112,0,672,674,7,10,0,0,673,672,1,0,0,0,673,674,1,0,0,0,674,677,1,0,0,
  	0,675,677,7,10,0,0,676,671,1,0,0,0,676,675,1,0,0,0,677,679,1,0,0,0,678,
  	662,1,0,0,0,678,670,1,0,0,0,679,112,1,0,0,0,680,681,5,48,0,0,681,691,
  	7,2,0,0,682,684,3,229,114,0,683,685,5,46,0,0,684,683,1,0,0,0,684,685,
  	1,0,0,0,685,692,1,0,0,0,686,688,3,229,114,0,687,686,1,0,0,0,687,688,1,
  	0,0,0,688,689,1,0,0,0,689,690,5,46,0,0,690,692,3,229,114,0,691,682,1,
  	0,0,0,691,687,1,0,0,0,692,693,1,0,0,0,693,695,7,11,0,0,694,696,7,12,0,
  	0,695,694,1,0,0,0,695,696,1,0,0,0,696,697,1,0,0,0,697,699,3,233,116,0,
  	698,700,7,10,0,0,699,698,1,0,0,0,699,700,1,0,0,0,700,114,1,0,0,0,701,
  	702,5,116,0,0,702,703,5,114,0,0,703,704,5,117,0,0,704,711,5,101,0,0,705,
  	706,5,102,0,0,706,707,5,97,0,0,707,708,5,108,0,0,708,709,5,115,0,0,709,
  	711,5,101,0,0,710,701,1,0,0,0,710,705,1,0,0,0,711,116,1,0,0,0,712,715,
  	5,39,0,0,713,716,8,13,0,0,714,716,3,227,113,0,715,713,1,0,0,0,715,714,
  	1,0,0,0,716,717,1,0,0,0,717,718,5,39,0,0,718,118,1,0,0,0,719,724,5,34,
  	0,0,720,723,8,14,0,0,721,723,3,227,113,0,722,720,1,0,0,0,722,721,1,0,
  	0,0,723,726,1,0,0,0,724,722,1,0,0,0,724,725,1,0,0,0,725,727,1,0,0,0,726,
  	724,1,0,0,0,727,728,5,34,0,0,728,120,1,0,0,0,729,730,5,110,0,0,730,731,
  	5,117,0,0,731,732,5,108,0,0,732,733,5,108,0,0,733,122,1,0,0,0,734,735,
  	5,40,0,0,735,124,1,0,0,0,736,737,5,41,0,0,737,126,1,0,0,0,738,739,5,123,
  	0,0,739,128,1,0,0,0,740,741,5,125,0,0,741,130,1,0,0,0,742,743,5,91,0,
  	0,743,132,1,0,0,0,744,745,5,93,0,0,745,134,1,0,0,0,746,747,5,59,0,0,747,
  	136,1,0,0,0,748,749,5,44,0,0,749,138,1,0,0,0,750,751,5,46,0,0,751,140,
  	1,0,0,0,752,753,5,61,0,0,753,142,1,0,0,0,754,755,5,62,0,0,755,144,1,0,
  	0,0,756,757,5,60,0,0,757,146,1,0,0,0,758,759,5,33,0,0,759,148,1,0,0,0,
  	760,761,5,126,0,0,761,150,1,0,0,0,762,763,5,63,0,0,763,152,1,0,0,0,764,
  	765,5,58,0,0,765,154,1,0,0,0,766,767,5,61,0,0,767,768,5,61,0,0,768,156,
  	1,0,0,0,769,770,5,60,0,0,770,771,5,61,0,0,771,158,1,0,0,0,772,773,5,62,
  	0,0,773,774,5,61,0,0,774,160,1,0,0,0,775,776,5,33,0,0,776,777,5,61,0,
  	0,777,162,1,0,0,0,778,779,5,38,0,0,779,780,5,38,0,0,780,164,1,0,0,0,781,
  	782,5,124,0,0,782,783,5,124,0,0,783,166,1,0,0,0,784,785,5,43,0,0,785,
  	786,5,43,0,0,786,168,1,0,0,0,787,788,5,45,0,0,788,789,5,45,0,0,789,170,
  	1,0,0,0,790,791,5,43,0,0,791,172,1,0,0,0,792,793,5,45,0,0,793,174,1,0,
  	0,0,794,795,5,42,0,0,795,176,1,0,0,0,796,797,5,47,0,0,797,178,1,0,0,0,
  	798,799,5,38,0,0,799,180,1,0,0,0,800,801,5,124,0,0,801,182,1,0,0,0,802,
  	803,5,94,0,0,803,184,1,0,0,0,804,805,5,37,0,0,805,186,1,0,0,0,806,807,
  	5,43,0,0,807,808,5,61,0,0,808,188,1,0,0,0,809,810,5,45,0,0,810,811,5,
  	61,0,0,811,190,1,0,0,0,812,813,5,42,0,0,813,814,5,61,0,0,814,192,1,0,
  	0,0,815,816,5,47,0,0,816,817,5,61,0,0,817,194,1,0,0,0,818,819,5,38,0,
  	0,819,820,5,61,0,0,820,196,1,0,0,0,821,822,5,124,0,0,822,823,5,61,0,0,
  	823,198,1,0,0,0,824,825,5,94,0,0,825,826,5,61,0,0,826,200,1,0,0,0,827,
  	828,5,37,0,0,828,829,5,61,0,0,829,202,1,0,0,0,830,831,5,60,0,0,831,832,
  	5,60,0,0,832,833,5,61,0,0,833,204,1,0,0,0,834,835,5,62,0,0,835,836,5,
  	62,0,0,836,837,5,61,0,0,837,206,1,0,0,0,838,839,5,62,0,0,839,840,5,62,
  	0,0,840,841,5,62,0,0,841,842,5,61,0,0,842,208,1,0,0,0,843,844,5,45,0,
  	0,844,845,5,62,0,0,845,210,1,0,0,0,846,847,5,58,0,0,847,848,5,58,0,0,
  	848,212,1,0,0,0,849,850,5,64,0,0,850,214,1,0,0,0,851,852,5,46,0,0,852,
  	853,5,46,0,0,853,854,5,46,0,0,854,216,1,0,0,0,855,857,7,15,0,0,856,855,
  	1,0,0,0,857,858,1,0,0,0,858,856,1,0,0,0,858,859,1,0,0,0,859,860,1,0,0,
  	0,860,861,6,108,0,0,861,218,1,0,0,0,862,863,5,47,0,0,863,864,5,42,0,0,
  	864,868,1,0,0,0,865,867,9,0,0,0,866,865,1,0,0,0,867,870,1,0,0,0,868,869,
  	1,0,0,0,868,866,1,0,0,0,869,871,1,0,0,0,870,868,1,0,0,0,871,872,5,42,
  	0,0,872,873,5,47,0,0,873,874,1,0,0,0,874,875,6,109,0,0,875,220,1,0,0,
  	0,876,877,5,47,0,0,877,878,5,47,0,0,878,882,1,0,0,0,879,881,8,16,0,0,
  	880,879,1,0,0,0,881,884,1,0,0,0,882,880,1,0,0,0,882,883,1,0,0,0,883,885,
  	1,0,0,0,884,882,1,0,0,0,885,886,6,110,0,0,886,222,1,0,0,0,887,891,3,237,
  	118,0,888,890,3,235,117,0,889,888,1,0,0,0,890,893,1,0,0,0,891,889,1,0,
  	0,0,891,892,1,0,0,0,892,224,1,0,0,0,893,891,1,0,0,0,894,896,7,17,0,0,
  	895,897,7,12,0,0,896,895,1,0,0,0,896,897,1,0,0,0,897,898,1,0,0,0,898,
  	899,3,233,116,0,899,226,1,0,0,0,900,901,5,92,0,0,901,922,7,18,0,0,902,
  	907,5,92,0,0,903,905,7,19,0,0,904,903,1,0,0,0,904,905,1,0,0,0,905,906,
  	1,0,0,0,906,908,7,5,0,0,907,904,1,0,0,0,907,908,1,0,0,0,908,909,1,0,0,
  	0,909,922,7,5,0,0,910,912,5,92,0,0,911,913,5,117,0,0,912,911,1,0,0,0,
  	913,914,1,0,0,0,914,912,1,0,0,0,914,915,1,0,0,0,915,916,1,0,0,0,916,917,
  	3,231,115,0,917,918,3,231,115,0,918,919,3,231,115,0,919,920,3,231,115,
  	0,920,922,1,0,0,0,921,900,1,0,0,0,921,902,1,0,0,0,921,910,1,0,0,0,922,
  	228,1,0,0,0,923,932,3,231,115,0,924,927,3,231,115,0,925,927,5,95,0,0,
  	926,924,1,0,0,0,926,925,1,0,0,0,927,930,1,0,0,0,928,926,1,0,0,0,928,929,
  	1,0,0,0,929,931,1,0,0,0,930,928,1,0,0,0,931,933,3,231,115,0,932,928,1,
  	0,0,0,932,933,1,0,0,0,933,230,1,0,0,0,934,935,7,3,0,0,935,232,1,0,0,0,
  	936,944,7,20,0,0,937,939,7,21,0,0,938,937,1,0,0,0,939,942,1,0,0,0,940,
  	938,1,0,0,0,940,941,1,0,0,0,941,943,1,0,0,0,942,940,1,0,0,0,943,945,7,
  	20,0,0,944,940,1,0,0,0,944,945,1,0,0,0,945,234,1,0,0,0,946,949,3,237,
  	118,0,947,949,7,20,0,0,948,946,1,0,0,0,948,947,1,0,0,0,949,236,1,0,0,
  	0,950,955,7,22,0,0,951,955,8,23,0,0,952,953,7,24,0,0,953,955,7,25,0,0,
  	954,950,1,0,0,0,954,951,1,0,0,0,954,952,1,0,0,0,955,238,1,0,0,0,48,0,
  	590,595,598,600,603,611,615,618,624,631,635,638,646,650,653,658,662,665,
  	668,673,676,678,684,687,691,695,699,710,715,722,724,858,868,882,891,896,
  	904,907,914,921,926,928,932,940,944,948,954,1,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  scriptlexerLexerStaticData = staticData.release();
}

}

ScriptLexer::ScriptLexer(CharStream *input) : Lexer(input) {
  ScriptLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *scriptlexerLexerStaticData->atn, scriptlexerLexerStaticData->decisionToDFA, scriptlexerLexerStaticData->sharedContextCache);
}

ScriptLexer::~ScriptLexer() {
  delete _interpreter;
}

std::string ScriptLexer::getGrammarFileName() const {
  return "Script.g4";
}

const std::vector<std::string>& ScriptLexer::getRuleNames() const {
  return scriptlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ScriptLexer::getChannelNames() const {
  return scriptlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ScriptLexer::getModeNames() const {
  return scriptlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ScriptLexer::getVocabulary() const {
  return scriptlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ScriptLexer::getSerializedATN() const {
  return scriptlexerLexerStaticData->serializedATN;
}

const atn::ATN& ScriptLexer::getATN() const {
  return *scriptlexerLexerStaticData->atn;
}




void ScriptLexer::initialize() {
  ::antlr4::internal::call_once(scriptlexerLexerOnceFlag, scriptlexerLexerInitialize);
}