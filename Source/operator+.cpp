#include<iostream>
using namespace std;
class Person
{
    // Person operator+(Person&p)//成员函数重载
    // {
    //     Person result;
    //     result.m_a = this->m_a + p.m_a;
    //     result.m_b = this->m_b + p.m_b;
    //     return result;
    // }
     public:
     int m_a;
     int m_b;
};
Person operator+(Person&p,Person&q)//全局重载
{
    Person result;
    result.m_a = p.m_a + q.m_a;
    result.m_b = p.m_b + q.m_b;
    return result;
};
void test01()
{
    Person p1;
    p1.m_a = 10;
    p1.m_b = 10;
    Person p2;
    p2.m_a = 20;
    p2.m_b = 20;
    Person p3 = p1 +p2;
    cout<<"p3.m_a = "<<p3.m_a<<endl;
    cout<<"p3.m_b = "<<p3.m_b<<endl;
};
int main()
{
    test01();
    return 0;
}