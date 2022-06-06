#include "../include/coding_main.h"
#include "../include/Errors.h"
#include "../include/REGEXL.h"
#include "../include/coding_gds.h"
#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

Coding::Coding(int size, char** arg)
	:file_in(NULL),all_ok(false),arg_size(size),arg_arg(arg)
{
	if (size==0) { throw Error("...",0,"缺少参数！"); }

	// !只读打开输入文件，必须存在，否则报错
	file_in = fopen(arg[0],"r");
	if (file_in == NULL) { throw Error("...",0,"无法打开源文件"); }
	// !打开编码文件，如果存在截取为0
	if (size>1)
	{
		Info("...",0,string("输出编码文件：")+string(arg[1])).print_what();
		file_out=fopen(arg[1],"w");
	}
	else // 自动在源文件所在目录下建立输出编码文件
	{
		string file_in_path = string(arg[0]);
		string file_out_path = file_in_path.substr(0,file_in_path.find_last_of('/')) + string("/out.MBin");
		Info("...",0,string("输出编码文件：")+file_out_path).print_what();
		file_out=fopen(file_out_path.c_str(),"w");
	}
	if (file_out == NULL) { throw Error("...",0,"无法打开编码文件"); }
	
	// !读入文件
		// 文件长度
	size_t file_length=0;
	if (fseeko64(file_in, 0, SEEK_END)!=0) { throw Error("...",0,"读代码时无法获取文件大小"); }
	file_length=ftello64(file_in);
		// 定义字节缓冲区，一次性读出全部代码
	char* c_codes = new char[file_length];
	fseeko64(file_in,0,SEEK_SET);
	if (fread(c_codes,1,file_length,file_in)!= file_length) { delete[] c_codes; throw Error("...",0,"读入文件时文件长度校准错误"); }
		// 转为 string ，按行分割，存入 vector
	boost::split(codes,c_codes,boost::is_any_of("\n"),boost::token_compress_on);
	delete[] c_codes;

	all_ok=true;
}

Coding::~Coding()
{
	// 释放文件句柄
	if (file_in != NULL)
	{
		fclose(file_in);
	}
	if (file_out != NULL)
	{
		fclose(file_out);
	}
	codes.clear();
}

void Coding::coding()
{
	Info("...",0,"开始编码检查").print_what();
	// 遍历代码
	auto it_codes = codes.begin();
	// !先删除注释
		// TODO 有待完善，剔除更多
	while (it_codes!=codes.end())
	{
		if (boost::regex_match(*it_codes,boost::regex("[\\s]*//[\\s\\S]*")))
		{
			it_codes = codes.erase(it_codes);
		}
		else { it_codes++; }
	}
	Info("...",0,string("有效代共")+to_string(codes.size())+string("句")).print_what();

	// !正式开始编码
		// 代码所处位置，用于信息输出
	string code_boot_place_name="boot";

		// 起始区块名
	CBlock* block_boot = new CBlock();
		// 添加起始区块到全局区块库
	global_dispatching_station::blocks.insert(pair<BLOCKS_PAIR>(code_boot_place_name,block_boot));
	global_dispatching_station::cur_block = block_boot;

	it_codes=codes.begin();
	while (it_codes!=codes.end())
	{
		boost::cmatch cm;
		if (false)
		{
			
		}
		else if (REGEXL::assignment((*it_codes).c_str(),cm))
			// 赋值
		{
			Info(code_boot_place_name,0,string("检测到赋值：")+*it_codes).print_what();
			
			it_codes++;
		}
		else
		{
			throw Error(code_boot_place_name,0,string("无法理解的语句：")+*it_codes);
		}
	}
	
}

bool Coding::is_ok()
{
	return (file_in != NULL && all_ok);
}