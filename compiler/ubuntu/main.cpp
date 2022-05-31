#include <iostream>
#include <boost/regex.hpp>
#include "include/coding_main.h"

typedef unsigned long long SIZE;

int main(int size, char** arg)
{
    if (size==1)
    {
        printf("缺少参数！\n");
    }

    if (strcmp(arg[1],"1")==0)
    {
        printf("开始编码！\n");
        coding_main(size-2,arg+2);
    }

    return 0;
}