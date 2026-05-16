#include <iostream>
using namespace std;
class Person
{
public:
    int m_a;
    int m_b;
    Person(int a, int b) : m_a(a), m_b(b) {}
};
ostream &operator<<(ostream &out, const Person &p)//operator前加&是为了返回一个引用，保持链式调用
{
    out << "m_a = " << p.m_a << endl;
    out << "m_b = " << p.m_b << endl;
    return out;
}
void test01()
{
    Person p1(10,10);
    cout << p1;//cout对象调用了重载的operator<<函数
}
int main()
{
    test01();
    return 0;
}