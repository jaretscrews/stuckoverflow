#pragma once
#include <string>

class TerminalReader {
public:
    TerminalReader() = default;
    ~TerminalReader() = default;
    std::string excuteCommandAndCaptureOutput(std::string);
    std::string parseForErrors(std::string);
};
