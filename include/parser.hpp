#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <string>
#include <vector>

class Parser {
    public:
        std::vector<std::string> parse(const std::string& line);
    public:
        std::string bbcodeval(const char value);
    private:
};

#endif