#include<iostream>
#include<cmath>
int main()
{
    // variable decleartion
    using namespace std;
    double principal; // 本金
    double rate ;     // 利率
    double payPerYear;// 每年偿还次数
    double numYears;  // 偿还的年限
    double payment ;  // 每次偿还的数额
    double number, denom; // 临时变量
    double b, e;      // 底数，指数

    // user input 
    cout << "输入本金" << endl;
    cin >> principal;
    cout << "输入利率" << endl;
    cin >> rate;
    cout << "输入每年偿还的次数" << endl;
    cin >> payPerYear;
    cout << "输入还款的年数" << endl;
    cin >> numYears;

    // calculate
    number = rate*principal/payPerYear;
    e = -(payPerYear*numYears);
    b = (rate/payPerYear)+1;
    denom =1 - pow(b,e);
    payment = number/denom;

    cout << "payment is " << payment << endl; //每次还款额
    
    return 0;
}



