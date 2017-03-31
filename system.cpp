#include<iostream>
// notic , need to add system("cls"); in vc 
// #include<process.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int max(int , int, int);
int min(int , int, int);
int failcount(int , int , int);
int goodcount(int , int , int);

int main()
{
    int options; // options
    int math , chinese , english; // marks of subject
    int total;  // total marks
    float average; // arerage
    int hightestscore, minimumscore ;
    int failedcount;  // 不及格科目  
    int excellentcount;// 优秀科目  



    
    while(options != 8)
    {

    cout << "              李明明同学的成绩管理系统               " << endl;
    cout << "          ===============================            " << endl;
    cout << endl;
    cout << "              1.输入学生成绩                         " << endl;
    cout << "              2.输出学生成绩                         " << endl;
    cout << "              3.计算总分和平均分                     " << endl;
    cout << "              4.查找最高分和最低分                   " << endl; 
    cout << "              5.统计不及格科目数                     " << endl;
    cout << "              6.统计优秀科目数                       " << endl;
    cout << "              7.输出成绩单                           " << endl;
    cout << "              8.退出                                 " << endl;
    cout << endl;
    cout << "          ===============================            " << endl;
    cout << "请输入你的选择项: ";
    cin >> options;
    

    switch (options)
    {
        case 1 :
        cout << "请输入数学，语文，英语的成绩《分数用空格间隔开》: " << endl;
        cin >> math >> chinese >> english ;
        break;
        case 2 :
        cout << "输出李明明同学的成绩 " << endl;
        cout << "    数学   语文     英语   " << endl;
        cout << "   " << math << "   " << chinese << "   " << english << endl;
        break;
        case 3 :
        total = math + chinese + english;
        average = (math + chinese + english)/3;
        cout << "计算总分和平均分   " << endl;
        cout << "   总分    平均分  " << endl;
        cout << "  " << total << "  " << average << endl;
        break;
        case 4 :
        hightestscore = max(math , english, chinese);
        minimumscore = min(math , english , chinese);
        cout << "查找最高分和最低分 " << endl;
        cout << "     最高分    最低分  " << endl;
        cout << "   " << hightestscore << "   " << minimumscore << endl;
        break;
        case 5  :
        failedcount = failcount(math , chinese, english);
        cout << "统计不及格科目数   " << endl;
        cout << "不及格科目数共有: " << failedcount << endl;
        break;
        case 6 :
        excellentcount = goodcount(math , english , chinese);
        cout << "统计优秀课程门数   " << endl;
        cout << "优秀的科目数为: " << excellentcount << endl;
        break;

        case 7 :
        average = (math +chinese + english)/3.0;
        total = math + chinese + english;

        cout << "李明明同学的成绩单为: " << endl;
        cout << "shuxue" << "     " << "yuwu" << "     " << "yingyu" << "     " << "pingjufen" << "     " << "pingjufen" << endl;
        cout << math << "     " << chinese << "     " << english << "     " << average << "     " << total << "    " << endl;
        break;

        case 8 :
        cout << "退出   " << endl;
        break;
    }

    }

    return 0;
}

int max(int a, int b, int c)
{
    int temp ,max;
    temp = a > b ? a: b;
    max = temp > c ? temp : c;
    return max;
}

int min(int a, int b , int c)
{
    int temp , min;
    temp = a < b ? a : b;
    min = temp < c ? temp : c;
    return min;
}

int failcount(int a, int b, int c)
{
    int count = 0;
    if (a < 60)
    count++;
    if (b < 60)
    count++;
    if (c < 60)
    count++;
    
    return count;
}

int goodcount(int a, int b, int c)
{
    int count = 0;
    if (a >=90 && a <= 100)
        count++;
    if (b >=90 && b <= 100)
        count++;
    if (c >=90 && c <= 100)
        count++;
    return count;
}
    
        

