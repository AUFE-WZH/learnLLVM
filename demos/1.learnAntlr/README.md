# 1.antlr实现的各种语法
https://github.com/antlr/grammars-v4


# 2.antlr生成Java并使用

```
antlr4 Lua.g4
javac Lua*.java

# 由于我的Ubuntu没有图形化界面，不能使用-gui命令
grun Lua chunk -tree

输入一些lua代码: print("hello antlr")
结束输入命令: control-D

```

# 3.antlr生成c++代码

```
antlr4 -Werror -Dlanguage=Cpp -listener -visitor -package luac  -o ./ Lua.g4
clang++  *.cpp -std=c++17 -lantlr4-runtime -I/usr/local/include/antlr4-runtime
```

# 4.运行C++代码
./a.out test.lua