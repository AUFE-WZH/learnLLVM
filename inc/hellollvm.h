#include "llvm/Support/raw_ostream.h"

void test_hellollvm() {
    llvm::errs() << "hello llvm!\n";
    return ;
}
