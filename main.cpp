#include <iostream>
#include <string>
using std::string;

char* strdup(const char* s){
    char* ptr = new char;
    auto newPtr = ptr;
    while(*s != '\0'){
        *ptr = *s;
        ptr++;
        s++;
    }
    *ptr = '\0';
    return newPtr;
}

int main() {
    string temp = "this string";
    const char* cstr = temp.c_str();
    strdup(cstr);
    std::cout << cstr << std::endl;
    return 0;
}

