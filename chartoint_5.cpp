#include<iostream>
#include<iomanip>

int main()
{
	using namespace std;

	char c1 , c2;
	c1 = 300;  // ����char���ͳ���Ϊ256 ����ʼ�������Ϸ���Χ�������ͨ�������δ֪�ַ�
	c2 = 400; // ����char���ͳ���Ϊ256 ����ʼ�������Ϸ���Χ�������ͨ�������δ֪�ַ�
	cout << c1 << setw(5) << c2 << endl;

	return 0;
}
