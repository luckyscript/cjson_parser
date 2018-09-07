#include "parse.h"
#include <string>
#include <iostream>

using namespace std;

Ast parse(const string &str)
{
    Ast ast;
    if(str.front() == '{') {
        cout << "Object like JSON " << endl;
        ast.value = parse_object(str);
        ast.type = "Object";

    } else if(str.front() == '[') {
        cout << "Array like JSON" << endl;
    } else {
        cout << "unsupport string param" << endl;
    }
    return ast;
}

Ast_value parse_object(const string &str)
{
    Ast_value result;
    // todo
    return result;
}

