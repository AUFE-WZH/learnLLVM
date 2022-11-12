cmake_minimum_required(VERSION 3.10)
project(learnLLVM)

# set compiler version
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)

# find llvm lib
# /usr/local/llvm/lib/cmake/llvm
set(LLVM_DIR "" CACHE PATH "")
find_package(LLVM REQUIRED 14)
llvm_map_components_to_libnames(llvm_all ${LLVM_TARGETS_TO_BUILD} Passes ExecutionEngine MCJIT)

# find source file
file(GLOB mycode_src "src/*.cc")

# compiler and set search include and link llvm lib
add_executable(${PROJECT_NAME} main.cpp ${mycode_src})
target_include_directories(${PROJECT_NAME}
        PRIVATE
        src
        ${LLVM_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PUBLIC ${llvm_all})
