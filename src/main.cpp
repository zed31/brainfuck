#include <iostream>
#include "parser.hpp"
#include <vector>
#include <string>

int main(int ac, char **av)  {
    Parser p{};
    std::vector<std::string> val = p.parse("><-->>>>>>>>>----------------");
    for (auto it = val.begin(); it != val.end(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}