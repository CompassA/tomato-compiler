#!/bin/zsh

cd ../grammar

rm -rf *.cpp
rm -rf *.h
rm -rf *.interp
rm -rf *.tokens

# antlr4 -Dlanguage=Cpp -visitor TomParser.g4
antlr4 -Dlanguage=Cpp TomParser.g4
# mv *.cpp ../antlr4-code
# mv *.tokens ../antlr4-code
# mv *.interp ../antlr4-code
# mv *.h ../antlr4-code/tomato-antlr

cd -