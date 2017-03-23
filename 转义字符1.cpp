#include<iostream>
int main()
{
	using namespace std;
	
	cout << "看字母" << "\101\102" << endl;
	getchar(); //等待用户输入一个字符
	cout << "再看字母:" << "\101\b\102" << endl; //对照ASCII字符表
	getchar();
	cout << "三看字母:" << "\101\r\102" << endl;
	getchar();
	cout << "还看字母:" << "AB" << endl;
	
	return 0;
}
