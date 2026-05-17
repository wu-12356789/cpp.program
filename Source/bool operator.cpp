#include<iostream>
using namespace std;
class People
{
    public:
    int age;
    People(int a)    {
        age=a;
    }
    bool operator>(const People &p)    {
        return age>p.age;
    }
    bool operator<(const People &p)    {
        return age<p.age;
    }
    bool operator==(const People &p)    {
        return age==p.age;
    }
};
ostream& operator<<(ostream &out,const People &p)
{
    out<<p.age;
    return out;
}
void test2()
{
    People p1(20);
    People p2(30);
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<(p1>p2)<<endl;
    cout<<(p1<p2)<<endl;
    cout<<(p1==p2)<<endl;
};
int main()
{
    test2();
    return 0;
}