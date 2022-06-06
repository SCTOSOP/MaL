#ifndef REGEXL_H
#define REGEXL_H

#include "../include/coding_block.h"
#include "../include/coding_types.h"
#include <boost/regex.hpp>
#include <string.h>
#include <unordered_map>

namespace REGEXL
{
	bool var_or_con(const char* str);

	// 赋值 -- 0全部 1左值 3右值
	bool assignment(const char* str, boost::cmatch& cm);

	// 函数调用 -- 0全部 1函数名 2所有参数
	bool fun_call(const char* str, boost::cmatch& cm);
}

#define BLOCKS_PAIR std::string,CBlock*
#define TYPES_PAIR std::string,CType*

class global_dispatching_station
{
public:
	static std::unordered_map<BLOCKS_PAIR> blocks;
	static std::unordered_map<TYPES_PAIR> types;

	// 当前正在处理的区块，一般用于区块继承
	static CBlock* cur_block;

};

#endif // !REGEXL_H