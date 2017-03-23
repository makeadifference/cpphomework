#include<iostream>
int main()
{
	using namespace std;

	char a ;
	short b ;
	int c;
	long d;
	float e;
	double f;
	void * g;
	char * h;
	short * i;
	int * j;
	long * k;
	float * l;
	double * m;
	cout << "size of char: " << sizeof(a) << endl; 
	cout << "size of short: " << sizeof(b) << endl;
	cout << "size of int: " << sizeof(c) << endl;
	cout << "size of long: " << sizeof(d) << endl;
	cout << "size of float: " << sizeof(e) << endl;
	cout << "size of double: " << sizeof(f) << endl;
	cout << "size of void *: " << sizeof g << endl;
	cout << "size of char *: " << sizeof h << endl;
	cout << "size of short *: " << sizeof i << endl;
	cout << "size of int *: " << sizeof j << endl;
	cout << "size of long *: " << sizeof k << endl;
	cout << "size of float *: " << sizeof l << endl;
	cout << "size of double *: " << sizeof m << endl;
	

	return 0;
}
