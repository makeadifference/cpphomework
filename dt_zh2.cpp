#include<iostream>
int main()
{
	using namespace std;
	
	int a = 32 , b;
	double c = 2.7 , d;
	char e = 'D' , f;
	b = a + c;  // A  �����������������
	d = a + d;  // d δ���г�ʼ��
	f = a + e; 
	cout << "b= " << b << endl;  
	cout << "d= " << d << endl; // δ���г�ʼ��������ڴ����������
	cout << "f= " << int(f) << endl;  // B
	cout << b+d+f << endl;  // C �������������ͣ��漰����ת����
	
	return 0; //������0 ��������ĸo��
}
	
