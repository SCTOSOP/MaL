#ifndef GLOBAL_DISPATCHING_STATION
#define GLOBAL_DISPATCHING_STATION


#include "../include/coding_block.h"
#include <string.h>
#include <unordered_map>

#define BLOCKS_PAIR std::string,CBlock*

class global_dispatching_station
{
public:
	// 初始化全局库
	static void init();

	// 全局区块库
	static std::unordered_map<BLOCKS_PAIR> blocks;
	// 全局数据块库
	static std::unordered_map<std::string,long> Tlong;
	// 全局数据块库
	static std::unordered_map<std::string,unsigned long> Tulong;
	// 全局数据块库
	static std::unordered_map<std::string,std::string> Tstring;
	// 全局数据块库
	static std::unordered_map<std::string,bool> Tbool;
	// 全局数据块库
	static std::unordered_map<std::string,double> Tdouble;

	// 当前正在处理的区块，一般用于区块继承
	static CBlock* cur_block;

};

#endif // !global_dispatching_station