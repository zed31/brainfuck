#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <string>
#include <vector>

class Parser {
    public:
        std::vector<std::string> parse(const std::string& line);
    private:
        std::string bbcodeval(const char value);
};

#endif