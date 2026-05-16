# include <iostream>
using namespace std;
class People
{
    public:
    int age;
    People(int a)    {
        age=a;
    }
};
ostream& operator<<(ostream &out,const People &p)
{
    out<<p.age;
    return out;
}
People& operator++(People &p)
{
    p.age++;
    return p;
}
People operator++(People &p,int)
{
    People temp=p;
    p.age++;
    return temp;
};
int main()
{
    People p(20);
    cout<<p<<endl;
    cout<<++(++p)<<endl;
    cout<<p++<<endl;
    return 0;
}
