#include<iostream>
using namespace std;
class Person
{
    public:
    Person()
    {
        cout<<"Person的构造函数被调用了"<<endl;
    }
    ~Person()
    {
        cout<<"Person的析构函数被调用了"<<endl;
    }
};
void test01()
{
    Person p; //栈区开辟空间，自动调用构造函数，离开作用域自动调用析构函数
}
void test02()
{
    Person *p = new Person; //堆区开辟空间，调用构造函数，离开作用域不会调用析构函数
    delete p; //手动释放堆区空间，调用析构函数
    cout<<"------------------"<<endl;
     Person *p2 = new Person; //堆区开辟空间，调用构造函数，离开作用域不会调用析构函数
     //没有delete p2; 造成内存泄漏，析构函数不会被调用
}
int main()
{
    test01();
    cout<<"------------------"<<endl;
    test02();
    return 0;
}