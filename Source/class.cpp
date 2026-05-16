#include <iostream>
using namespace std;
class Cube
{
public:
    void setlength(int  l)
    {
        length=l;
    }
    void setwidght(int  w)
    {
        widght=w;
    }
    void sethight(int  h)
    {
        hight=h;
    }
    int getlength()
    {
        return length;
    }
    int getwidght()
    {
        return widght;
    }
    int gethight()
    {
        return hight;
    }
    int getvolume()
    {
        return length*widght*hight;
    }
    bool flag1(Cube &c)
    {
        if(length==c.getlength() && widght==c.getwidght() && hight==c.gethight())
        {
            return true;
        }
        else
        {
            return false;
        }
    }//成员函数，比较当前立方体与另一个立方体是否相等   

private:
    int length;
    int widght;
    int hight;
};
bool flag(Cube &c1,Cube &c2)
    {
        if(c1.getlength()==c2.getlength() && c1.getwidght()==c2.getwidght() && c1.gethight()==c2.gethight())
        {
            return true;
        }
        else
        {
            return false;
        }
    }//全局函数，比较两个立方体是否相等
int main()
{
    Cube c1;
    c1.setlength(10);
    c1.sethight(10);
    c1.setwidght(10);
    cout<<"该立方体体积为"<<c1.getvolume()<<endl;
    Cube c2;
    c2.setlength(10);
    c2.sethight(10);
    c2.setwidght(10);
    cout<<"该立方体体积为"<<c2.getvolume()<<endl;
    flag(c1,c2)?cout<<"（全局函数比较）两个立方体相等"<<endl:cout<<"两个立方体不相等"<<endl;
    c1.flag1(c2)?cout<<"(局部函数比较)两个立方体相等"<<endl:cout<<"两个立方体不相等"<<endl;
    return 0;
    system("pause");
}