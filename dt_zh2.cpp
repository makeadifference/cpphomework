#include<iostream>
int main()
{
	using namespace std;
	
	int a = 32 , b;
	double c = 2.7 , d;
	char e = 'D' , f;
	b = a + c;  // A  ，进行四舍五入输出
	d = a + d;  // d 未进行初始化
	f = a + e; 
	cout << "b= " << b << endl;  
	cout << "d= " << d << endl; // 未进行初始化，输出内存中随机数字
	cout << "f= " << int(f) << endl;  // B
	cout << b+d+f << endl;  // C ，分析数据类型！涉及类型转换！
	
	return 0; //是数字0 ，不是字母o。
}
	
