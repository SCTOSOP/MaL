#include <iostream>
#include <string.h>
#include "include/coding_main.h"
#include "include/Errors.h"


int main(int size, char** arg)
{
    if (size==1)
    {
        Error("...",0,"缺少参数！").print_what();

		return 1;
    }

    if (strcmp(arg[1],"1")==0)
    {
        printf("开始编码！\n");
        
        try
        {
            Coding code = Coding(size-2, arg+2);
        }
        catch(Error* e)
        {
            printf("%s\n",e->what());
        }
        
    }

    return 0;
}