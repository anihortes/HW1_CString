#include <iostream>

char* strup(const char* s){
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
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

