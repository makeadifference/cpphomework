#include<iostream>
using namespace std;
int main()
{
    char sex; // m/f
    float faHeight , moHeight; 
    char sports;  // y / n
    char diet ; // y / n
    
    float  height;
    
    cout << "input sex (m --man , f --female) " << endl;
    cin >> sex;
    cout << "input Your father's height: " << endl;
    cin >> faHeight;
    cout << "input your mother's height: " << endl;
    cin >> moHeight;
    cout << "Do you like sport?(y / n) " << endl;
    cin >> sports;
    cout << "Do you have a healthy diet ?(y / n) " << endl;
    cin >> diet;

    if(sex == 'f' || sex == 'F'){
        height = (faHeight + moHeight ) * 0.54;
        if (sports == 'y')
            height = height + height * 0.02;
        if (diet == 'y')
            height = height + height * 0.015;

    } else  {
        height = (faHeight + moHeight ) / 2;
        if (sports == 'y' || sports == 'Y')
            height = height + height * 0.02;
        if (diet == 'Y' || diet == 'y')
            height = height + height * 0.015;

    }

    cout << "Your height maybe: " << height << " when you grow up " << endl;

    return 0;
}

