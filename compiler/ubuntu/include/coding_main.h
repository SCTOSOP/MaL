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
	FILE* file;
	std::vector<std::string> codes;
};

#endif // !CODING_MAIN