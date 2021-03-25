#include "TerminalReader.h"
#include <iostream>

std::string TerminalReader::excuteCommandAndCaptureOutput(std::string cmd) {
    std::string data;
    FILE * stream;
    const int max_buffer = 256;
    char buffer[max_buffer];
    cmd.append(" 2>&1");

    stream = popen(cmd.c_str(), "r");
    if (stream) {
        while (!feof(stream)) {
            if (fgets(buffer, max_buffer, stream) != NULL) { 
                data.append(buffer);
            }
        }
        pclose(stream);
    }
    return data;
}

//Finds the first error in a clang++ compiled program
std::string TerminalReader::parseForErrors(std::string s) {
    auto errorStart = s.find("error");
    auto errorEnd = s.find('\n', errorStart);
    auto error = s.substr(errorStart, errorEnd - errorStart);
    return error;
}
