#include<iostream>
int main()
{
	using namespace std;
	
	cout << "����ĸ" << "\101\102" << endl;
	getchar(); //�ȴ��û�����һ���ַ�
	cout << "�ٿ���ĸ:" << "\101\b\102" << endl; //����ASCII�ַ���
	getchar();
	cout << "������ĸ:" << "\101\r\102" << endl;
	getchar();
	cout << "������ĸ:" << "AB" << endl;
	
	return 0;
}
