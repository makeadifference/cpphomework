#include<iostream>
int main()
{
	using namespace std;
	
	int a = 32 , b;
	double c = 2.7 , d;
	char e = 'D' , f;
    int temp ;  // �����������
	b = a + c;  // A  �����������������
	d = a + d;  // d δ���г�ʼ��
	f = a + e; 
    temp = int(b + 0.5) > int(b) ? b : b+1;
	cout << "b= " << temp  << endl;  
	cout << "d= " << d << endl; // δ���г�ʼ��������ڴ����������
	cout << "f= " << f << endl;  // B
	cout << b+d+f << endl;  // C �������������ͣ��漰����ת����
	
	return 0; //������0 ��������ĸo��
}
	