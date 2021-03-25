#include "libStackOverflowApi/StackOverflowApi.h"
#include "libTerminalReader/TerminalReader.h"

#include <iostream>

int main(){
    StackOverflowApi x;
    TerminalReader t;
    auto res = t.excuteCommandAndCaptureOutput("mkdir testBuild && cd testBuild && cmake ../.. && make");
    std::cout << res << std::endl;
    //x.SearchForTopic("test");
}
