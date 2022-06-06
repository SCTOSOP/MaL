#ifndef GLOBAL_DISPATCHING_STATION
#define GLOBAL_DISPATCHING_STATION


#include "../include/coding_block.h"
#include "../include/coding_types.h"
#include <string.h>
#include <unordered_map>

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

#endif // !global_dispatching_station