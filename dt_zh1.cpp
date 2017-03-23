#include<iostream>
int main()
{
	using namespace std;
	
	int a = 32 , b;
	double c = 2.7 , d;
	char e = 'D' , f;
    int temp ;  // ¿¿¿¿¿¿¿¿¿¿¿
	b = a + c;  // A  £¬½øÐÐËÄÉáÎåÈëÊä³ö
	d = a + d;  // d Î´½øÐÐ³õÊ¼»¯
	f = a + e; 
    temp = int(b + 0.5) > int(b) ? b : b+1;
	cout << "b= " << temp  << endl;  
	cout << "d= " << d << endl; // Î´½øÐÐ³õÊ¼»¯£¬Êä³öÄÚ´æÖÐËæ»úÊý×Ö
	cout << "f= " << f << endl;  // B
	cout << b+d+f << endl;  // C £¬·ÖÎöÊý¾ÝÀàÐÍ£¡Éæ¼°ÀàÐÍ×ª»»£¡
	
	return 0; //ÊÇÊý×Ö0 £¬²»ÊÇ×ÖÄ¸o¡£
}
	
