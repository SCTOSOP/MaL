#include "../include/coding_main.h"
#include "../include/Errors.h"
#include "../include/REGEXL.h"
#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;


Coding::Coding(int size, char** arg)
	:file(NULL),all_ok(false)
{
	if (size==0) { throw Error("...",0,"缺少参数！"); }

	// 只读打开，必须存在，否则报错
	file = fopen(arg[0],"r");
	if (file == NULL)
	{
		throw Error("...",0,"无法打开文件！");
	}
	
	// 读入文件
		// 文件长度
	size_t file_length=0;
	if (fseeko64(file, 0, SEEK_END)!=0) { throw Error("...",0,"读代码时无法获取文件大小"); }
	file_length=ftello64(file);
		// 定义字节缓冲区，一次性读出全部代码
	char* c_codes = new char[file_length];
	fseeko64(file,0,SEEK_SET);
	if (fread(c_codes,1,file_length,file)!= file_length) { delete[] c_codes; throw Error("...",0,"读入文件时文件长度校准错误"); }
		// 转为 string ，按行分割，存入 vector
	boost::split(codes,c_codes,boost::is_any_of("\n"),boost::token_compress_on);
	delete[] c_codes;

	all_ok=true;
}

Coding::~Coding()
{
	// 释放文件句柄
	if (file != NULL)
	{
		fclose(file);
	}
	codes.clear();
}

void Coding::coding()
{
	Info("...",0,"开始翻译").print_what();
}

bool Coding::is_ok()
{
	return (file != NULL && all_ok);
}