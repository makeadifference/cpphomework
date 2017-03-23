#include<iostream>
#include<iomanip>

int main()
{
	using namespace std;

	char c1 , c2;
	c1 = 300;  // 错误，char类型长度为256 ，初始化超出合法范围！编译可通过，输出未知字符
	c2 = 400; // 错误，char类型长度为256 ，初始化超出合法范围！编译可通过，输出未知字符
	cout << c1 << setw(5) << c2 << endl;

	return 0;
}
