#include "../include/coding_main.h"
#include "../include/Errors.h"
#include <iostream>
#include <vector>

using namespace std;


Coding::Coding(int size, char** arg)
    :file(NULL)
{
    if (size==0) { throw new Error("...",0,"缺少参数！"); }



    file = fopen(arg[0],"r");
    if (file == NULL)
    {
        throw new Error("...",0,"无法打开文件！");
    }
}

Coding::~Coding()
{
    if (file != NULL)
    {
        fclose(file);
    }
}