#include<iostream>
using namespace std;
class Cube
{
public:
Cube(int m_age)
{
    age=m_age;
}
 Cube& strong(Cube &c)
{
age+=c.age;
return *this;
}
int age;
};
void test01()
{   
Cube c(10);
Cube d(10);
d.strong(c).strong(c);
cout<<d.age<<endl;
}
int main()
{ 
test01();
return 0;

}
