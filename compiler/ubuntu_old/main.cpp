#include <iostream>
#include <string.h>
#include "include/coding_main.h"
#include "include/Errors.h"


int main(int size, char** arg)
{
	// 检查参数缺失
	if (size==1)
	{
		Error("...",0,"缺少参数！").print_what();

		return -1;
	}

	if (strcmp(arg[1],"1")==0)
	{	
		try
		{
			Coding code = Coding(size-2, arg+2);
			code.coding();
		}
		catch(Error& e)
		{
			e.print_what();
		}
		
	}
	else
	{
		Error("...",0,"未知参数！").print_what();
	}

	return 0;
}