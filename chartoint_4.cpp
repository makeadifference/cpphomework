// 错误分析2!
#include<iostream>
#include<iomanip>

int main()
{
	using namespace std;

	char c1 , c2;
	c1 = "a";   // char；类型需要使用单引号进行初始化
	c2 = "b";  // char；类型需要使用单引号进行初始化
	cout << c1 << setw(5) << c2 << endl;

	return 0;
}
