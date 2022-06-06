#include "../include/coding_gds.h"

std::unordered_map<std::string,CBlock*> global_dispatching_station::blocks;
std::unordered_map<std::string,CType*> global_dispatching_station::types;
CBlock* global_dispatching_station::cur_block = nullptr;