#include<iostream>
using namespace std;
#include<string>
class Building
{
 friend class Goodgay;
public:
string m_sittingroom;//客厅
    Building();
private:
    
    string m_bedroom;//卧室
};
class Goodgay
{
    public:
    void visit();
    Building *building;
};
Building::Building()
{
    m_sittingroom = "客厅";
    m_bedroom = "卧室";
}
void Goodgay::visit()
{
    building = new Building;
    cout<<"好基友正在参观："<<building->m_sittingroom<<endl;
    //cout<<"好基友正在参观："<<building->m_bedroom<<endl;//error，私有属性不能被访问
    cout<<"好基友正在参观："<<building->m_bedroom<<endl;//友元类可以访问私有属性
 
}
void test01()
{
Goodgay gg;
gg.visit();
delete gg.building;
}
int main()
{
    test01();
    return 0;
}