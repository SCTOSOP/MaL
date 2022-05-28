#include <iostream>
#include <bitset>
using namespace std;

struct Num
{
	// 已压缩的数字
	char* num;
	// num字节数
	size_t size;
	// 小数还是整数：0整数 1小数
	bool type;
	// 正负 0正 1负
	bool pm;
};

char* num2char(Num& num)
{
	
}

Num char2num(const char* ptr, size_t size)
{

}

void InputNumber(size_t size, void* ptr)
{
	
}

void print2(size_t num)
{
	cout << "二进制：" << bitset<32>(num) << endl;
}

int main()
{
	auto num = "11685868686487598900979757575436547575897982342536366294865298734569183475";
	auto num2 = "28735649834791847564375847358732874362756834765823764873284576234882";
	Num n = char2num(num, strlen(num));
	Num n2 = char2num(num2, strlen(num2));

	return 0;
}