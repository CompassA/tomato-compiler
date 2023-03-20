grammar Script;

import TomLexer;

// 语句
statement
    : block
    | IF '(' expr ')' statement (ELSE statement)?
    | WHILE '(' expr ')' statement
    | FOR '(' (variableDeclarator | expr)? ';' expr? ';' exprList? ')' statement
    | DO statement WHILE '(' epxr ')' ';'
    | RETURN expr ';'
    | BREAK ';'
    | CONTINUE ';'
    | expr ';'
    ;

// 语句块
block
    : '{' (variableDeclarator';' | statement)* '}'
    ;

// 变量声明
variableDeclarator
    : type IDENTIFIER '=' expr
    ;

// 类型
type 
    : IDENTIFIER | primitiveType
    ;

// 原始类型
primitiveType
    : BOOLEAN
    | CHAR
    | BYTE
    | SHORT
    | INT
    | LONG
    | FLOAT
    | DOUBLE
    | VOID
    ;    

exprList
    : expr (',' expr)*

expr
    : primary
    | expr bop=(DOT) funcCall
    | expr bop=(MUL|DIV|MOD) expr
    | expr bop=(ADD|SUB) expr
    | expr bop=(GT|LT|LE|GE|EQUAL|NOTEQUAL) expr
    | expr bop=(AND|OR) expr
    ;

// 函数
funcDef
    :
    ;

// 函数调用    
funcCall
    : expr LPAREN (expr(COMMA expr)*)? RPAREN
    ;


primary 
    : DECIMAL_LITERAL
    | STRING_LITERAL
    | IDENTIFIER
    | BOOL_LITERAL
    | NULL_LITERAL
    | LPAREN expr RPAREN 
    ;