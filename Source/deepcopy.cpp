#include <iostream>
using namespace std;
class Person{
public:
    Person()
    {
        cout<<"Person的构造函数被调用了"<<endl;
    }
    Person(Person &p)
    {
        cout<<"Person的拷贝构造函数被调用了"<<endl;
        this->m_age = p.m_age;
        this->m_high = new int(*p.m_high);
    }
    ~Person()
    {
        if(this->m_high != nullptr)
        {
            delete this->m_high;
            this->m_high = nullptr;
        }
        cout<<"Person的析构函数被调用了"<<endl;
    }
    int m_age;
    int *m_high;
};
void test01()
{
    Person p1;
    p1.m_age = 18;
    p1.m_high = new int(180);
    Person p2(p1);
    cout<<"p1的年龄为："<<p1.m_age<<"，身高为："<<*p1.m_high<<endl;
    cout<<"p2的年龄为："<<p2.m_age<<"，身高为："<<*p2.m_high<<endl;
}
int main() 
{
    test01();
    return 0;
}