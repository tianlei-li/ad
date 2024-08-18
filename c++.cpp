#include<iostream>
using namespace std;
void show()
{
    cout<<" dawdawdawd\n";
}
typedef struct student//添加了一个学生结构体赋予了最基本的信息存储功能！
{
    char name[16];
    int age;
    int wage;
    double student_number;
    student():name("NULLBody"),age(0),wage(0),student_number(0){}
    void name_change()
    {
        cout<<"请输入你的姓名：";
        cin.getline(name,16);
        this->age=18;
        this->student_number=11;
        this->wage=18000;
    }
    void show()
    {
        cout<<student_number<<":"<<name<<":"<<age<<" 工资 "<<wage<<endl;
    }
}studnet;
int main()
{
    show();
    int a;
    cin>>a;
    studnet c;
    c.show();
    c.name_change();
    c.show();
    cout<<a<<":"<<"工资\n";
}