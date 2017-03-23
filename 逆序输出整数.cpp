#include<iostream>
int main()
{
    using namespace std;
    int n, i, j, k;
    cout << "输入一个三位数的整数 n: ";
    cin >> n;
    i =n%10;   // i 存放个位数
    n =(n-i)/10;  //去掉个位数
    j =n%10;   // j 存放十位数
    n =(n-j)/10; // 去掉十位数
    k =n;
    n =i*100+j*10+k;
    cout << "逆序数为:" << n << endl;

    return 0;
}

