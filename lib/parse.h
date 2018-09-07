#pragma once
#include <string>
#include <vector>

struct Ast_value {
    std::string type;
    std::string key;
    std::string value;
    std::vector<Ast_value> children;
};

struct Ast {
    std::string type;
    Ast_value value;
};


Ast_value parse_object(const std::string &);

Ast parse(const std::string &str);