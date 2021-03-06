#ifndef CODING_MAIN
#define CODING_MAIN

#include <iostream>
#include <vector>

class Coding
{
public:
	Coding(int size, char** arg);
	~Coding();

	// 编码
	void coding();
	// 校验文件是否有效
	bool is_ok();

protected:
	int arg_size;
	char** arg_arg;

	FILE* file_in;
	FILE* file_out;
	std::vector<std::string> codes;
	bool all_ok;
};

#endif // !CODING_MAIN