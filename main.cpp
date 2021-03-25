#include "libStackOverflowApi/StackOverflowApi.h"
#include "libTerminalReader/TerminalReader.h"

#include <iostream>

int main(int argc, char **argv) {
    StackOverflowApi x;
    TerminalReader t;
    std::string cmd;
    for(int i = 1; i < argc; i++) {
        cmd.append(argv[i]);
        if(i != argc - 1)
            cmd.append(" ");
    }
    std::cout << "cmd: " << cmd << std::endl;
    auto res = t.excuteCommandAndCaptureOutput(cmd);
    auto errors = t.parseForErrors(res);
    std::cout << errors << std::endl;
    //x.SearchForTopic("test");
}
