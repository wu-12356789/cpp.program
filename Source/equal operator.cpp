#include<iostream>
using namespace std;
class People
{
    public:
    int* age;
    People(int a)    {
        age=new int(a);
    }
    People operator=(const People &p)    {
        age=new int(*p.age);
        return *this;
    }
};
ostream& operator<<(ostream &out,const People &p)
{
    out<<*p.age;
    return out;
}
void test1()
{
    People p1(20);
    People p2(30);
    cout<<p1<<endl;
    cout<<p2<<endl;
    p1=p2;
    cout<<p1<<endl;
};
int main()
{
    test1();
    return 0;
}