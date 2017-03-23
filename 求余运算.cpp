#include<iostream>
int main()
{
    using namespace std;
    // 整数求余
    int a = 99, b = 23;
    cout << a%b << endl;
    // 尝试使用float与double类型求余
    // 错误提示，不能将求余运算符使用float与double类型表达式
    /*float c = 99.0 , d = 23.0;
      cout << c%d << endl;
    
      double e = 99.0, f =23.0;
      cout << e % f << endl;
    */

    // 尝试以0作为除数
    //cout << a/0 << endl; // 错误，这是一种未定义的行为

    return 0;

}
