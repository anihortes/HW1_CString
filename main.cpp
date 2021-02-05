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

//string xString = "never";
//string sString = "twelve";
char* findx(const char* s, const char* x) {
    int count = 0;
    while (*x != '\0') {
        s = s-count;
        count = 0;
        //point back to head of string
        while (*s != '\0') {
            if (*x == *s) {
                char *iter = (char*)s;
                return iter;
            }
            count++;
            ++s;
        }
        ++x;
    }
    char *iter = nullptr;
    return iter;
}

int main() {
    string temp = "string for first program";
    const char* cstr = temp.c_str();
    strdup(cstr);
    cout << cstr << endl;

    string xString = "nrsaver";
    string sString = "twelve";
    const char* xStringToChar = xString.c_str();
    const char* sStringToChar = sString.c_str();
    auto newString = findx(sStringToChar, xStringToChar);
    cout << newString << endl;

    return 0;
}

