#include <iostream>
using namespace std;
void test(int &a)
{
    a+=10;
}
void test(const int &a)//常量引用，不能修改a的值
{
    cout <<"只能读取a的值，不能修改"<<endl;
}
int main(){

    int a=10,b=10;
    test(a);
    cout <<a<<endl;
    test(10);//常量引用可以接受字面值常量
    system("pause");
    return 0;
} 
