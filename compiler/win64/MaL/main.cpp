#include <iostream>
#include <bitset>
using namespace std;

struct Num
{
	// ��ѹ��������
	char* num;
	// num�ֽ���
	size_t size;
	// С������������0���� 1С��
	bool type;
	// ���� 0�� 1��
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
	cout << "�����ƣ�" << bitset<32>(num) << endl;
}

int main()
{
	auto num = "11685868686487598900979757575436547575897982342536366294865298734569183475";
	auto num2 = "28735649834791847564375847358732874362756834765823764873284576234882";
	Num n = char2num(num, strlen(num));
	Num n2 = char2num(num2, strlen(num2));

	return 0;
}