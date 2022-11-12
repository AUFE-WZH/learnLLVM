# CMake进行构建
```shell
cd learnLLVM
mkdir build
cd build 
cmake .. -DLLVM_DIR=/usr/local/llvm/lib/cmake/llvm
make
```


# 重新执行
```
cmake .. -DLLVM_DIR=/usr/local/llvm/lib/cmake/llvm
make
```

# 执行
```
./learnLLVM
```