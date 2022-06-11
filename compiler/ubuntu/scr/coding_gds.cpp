#include "../include/coding_gds.h"

std::unordered_map<std::string,CBlock*> global_dispatching_station::blocks;
CBlock* global_dispatching_station::cur_block = nullptr;

std::unordered_map<std::string,long> global_dispatching_station::Tlong;
std::unordered_map<std::string,unsigned long> global_dispatching_station::Tulong;
std::unordered_map<std::string,std::string> global_dispatching_station::Tstring;
std::unordered_map<std::string,bool> global_dispatching_station::Tbool;
std::unordered_map<std::string,double> global_dispatching_station::Tdouble;

void global_dispatching_station::init()
{
	
}