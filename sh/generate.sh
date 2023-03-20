#!/bin/bash
###
 # @Author: Tomato
 # @Date: 2023-03-20 09:55:26
 # @LastEditTime: 2023-03-20 10:04:43
### 

script_dir=../antlr4-code
namespace=tomato
antlr4 -Dlanguage=Cpp -visitor -package $namespace $script_dir/Script.g4