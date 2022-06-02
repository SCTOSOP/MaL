#ifndef CODING_MAIN
#define CODING_MAIN

#include <iostream>

class Coding
{
public:
    Coding(int size, char** arg);
    ~Coding();

protected:
    FILE* file;

};

#endif // !CODING_MAIN