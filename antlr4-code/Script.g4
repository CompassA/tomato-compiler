grammar Script;

import TomLexer;


expr
    : primary
    | expr bop=(MUL|DIV|MOD) expr
    | expr bop=(ADD|SUB) expr
    | expr bop=(GT|LT|LE|GE|EQUAL|NOTEQUAL) expr
    | expr bop=(AND|OR) expr
    ;

primary 
    : DECIMAL_LITERAL
    | STRING_LITERAL
    | IDENTIFIER
    | LPAREN expr RPAREN 
    ;