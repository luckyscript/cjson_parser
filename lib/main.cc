#include <node.h>
#include <string>
#include <nan.h>
#include "parse.h"
using namespace v8;
using namespace std;
// int main() {
//     string s("{}");
//     parse(s);
//     return 0;
// }


NAN_METHOD(jparse) {
    if(info.Length() < 1) {
        Nan::ThrowError("wrong arguments");
        return;
    }
    string str = *(String::Utf8Value(info[0]->ToString()));
    parse(str);

}

NAN_MODULE_INIT(Init) {
    Nan::SetMethod(target, "jparse", jparse);
}

NODE_MODULE(binding, Init);