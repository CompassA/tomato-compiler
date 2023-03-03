#!/bin/zsh
###
 # @Author: Tomato
 # @Date: 2023-02-21 23:22:43
 # @LastEditTime: 2023-03-04 00:35:43
### 
rm -rf *.cpp
rm -rf *.h
rm -rf *.interp
rm -rf *.tokens

antlr4 -Dlanguage=Cpp -package tomato TomLexer.g4
antlr4 -Dlanguage=Cpp -visitor -package tomato Script.g4
