// 提交上机报告进行分析
#include<iostream>
int main()
{
	using namespace std;

	double a= 0.65f , b =0.6f;
	double c = a - b;
	if(c==0.05)
		cout << "对了!" << endl;
	else 
		cout << "错了!" << endl;

	return 0;
}