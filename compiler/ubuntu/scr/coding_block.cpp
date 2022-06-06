//coding_block.h
#include "../include/coding_block.h"

CBlock::CBlock(CBlock* p)
	:parent_ptr(p)
{
	
}

CBlock::~CBlock()
{
	vars.clear();
	cons.clear();
}