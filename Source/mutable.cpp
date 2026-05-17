#include<iostream>
using namespace std;
class Person
{
public:
int m_age=0;
mutable int m_score=0;//mutable修饰的成员属性，即使在const成员函数中也可以修改
void addperson() const//在成员函数后面加const，表示该成员函数不会修改成员属性
{
   // m_age = 10;//error，const成员函数不能修改成员属性
    m_score = 100;
}
void func()//普通函数
{
    cout<<"这是普通函数"<<endl;
}

};
void test01()
{
    Person p1;
    p1.addperson();
    cout<<"age = "<<p1.m_age<<endl;
    cout<<"score = "<<p1.m_score<<endl;
}
void test02()
{
    const Person p;
    //p.m_age = 10;//error，const对象不能修改成员属性
    p.m_score = 30;//mutable修饰的成员属性可以修改
    cout<<"p.m_score="<<p.m_score<<endl;
   // p.func();//const对象只能调用const成员函数
   p.addperson();
   cout<<"p.m_score="<<p.m_score<<endl;
}
int main()
{
    test01();
    test02();
    return 0;
}