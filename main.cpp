#include <iostream>
using std::cout;
using std::endl;
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

char* findx(const char* s, const char* x){

}

int main() {
    string temp = "this string";
    const char* cstr = temp.c_str();
    strdup(cstr);
    cout << cstr << endl;

    string xString = "this word is lame right?";
    string sString = "i never said this word was lame";
    cout << xString << sString << endl;
    return 0;
}

