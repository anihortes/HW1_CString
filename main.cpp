/*
 * A. Harrison Owen
 * CS 202: Homework 1
 * Professor Hartman
 * 02/05/2021
 */

//Takes a C-style string and dynamically allocates it to memory.
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

//finds the first instance of x in s
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

