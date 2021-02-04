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
    char *iter1 = new char;
    char *iter = new char;
    int count = 0;
    while (*x != '\0') {
        s = s-count+2;
        while (*s != '\0') {
            if (*x == *s) {
                *iter = *s;
                return iter;
            }
            count++;
            ++s;
        }
        ++x;
    }
    iter = nullptr;
    return iter;
}

int main() {
    string temp = "man dumb";
    const char* cstr = temp.c_str();
    strdup(cstr);
    cout << cstr << endl;

    string xString = "insane";
    string sString = "mmean";
    const char* xStringToChar = xString.c_str();
    const char* sStringToChar = sString.c_str();
    temp = findx(sStringToChar, xStringToChar);
    cout << "AHHHH " << temp << endl;

    return 0;
}

