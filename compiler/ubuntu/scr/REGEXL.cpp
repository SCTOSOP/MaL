#include "../include/REGEXL.h"

using namespace boost;

bool REGEXL::var_or_con(const char* str)
{
	return regex_match(str,regex("[a-zA-Z][_a-zA-Z0-9]*"));
}

bool REGEXL::assignment(const char* str, boost::cmatch& cm)
{
	return regex_match(str,cm,regex("var[\\s]+([a-zA-Z][_a-zA-Z0-9]*)([\\s]*=[\\s]*([\\S]+)){0,1}"));
}

bool REGEXL::fun_call(const char* str, boost::cmatch& cm)
{
	return regex_match(str,cm,regex("([a-zA-Z][_a-zA-Z0-9]*)[\\s]*\\([\\s]*(([a-zA-Z][_a-zA-Z0-9]*[\\s]*){0,})\\)"));
}

std::unordered_map<std::string,CBlock*> global_dispatching_station::blocks;
std::unordered_map<std::string,CType*> global_dispatching_station::types;
CBlock* global_dispatching_station::cur_block = nullptr;