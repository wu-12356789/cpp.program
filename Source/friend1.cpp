#include<iostream>
using namespace std;
#include<string>
class Building
{
    friend void Goodgay(Building &building);//全局函数做友元函数
    public:
    
    Building()
    {
        m_sittingroom = "客厅";
        m_bedroom = "卧室";
    }
    public:
    string m_sittingroom;//客厅
    
    private:
    string m_bedroom;//卧室
};
void Goodgay(Building &building)
{
    cout<<"好基友正在参观："<<building.m_sittingroom<<endl;
    //cout<<"好基友正在参观："<<building.m_bedroom<<endl;//error，私有属性不能被访问
    cout<<"好基友正在参观："<<building.m_bedroom<<endl;//error，私有属性不能被访问
 
}
int main()
{
    Building building;
    Goodgay(building);
    return 0;
}