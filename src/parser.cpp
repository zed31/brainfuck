#include "parser.hpp"
#include <map>
#include <vector>
#include <iostream>

static std::map<char, std::string> values{
    {'>', "++p"},
    {'<', "--p"},
    {'+', "++*p"},
    {'-', "--*p"},
    {'.', "putchar(*p)"},
    {',', "*p = getchar()"},
    {'[', "while (*p) {"},
    {']', "}"}
};

std::vector<std::string> Parser::parse(const std::string& line) {
    std::vector<std::string> ret;
    for (auto it = line.begin(); it != line.end(); ++it) {
        ret.push_back(bbcodeval(*it));
    }
    return ret;
}

std::string Parser::bbcodeval(const char value) {
    for (auto it = values.begin(); it != values.end(); ++it) {
        if (value == it->first) {
            return it->second;
        }
    }
    return "invalid";
}