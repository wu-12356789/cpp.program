#include<iostream>
#include<string>
using namespace std;
class Animal
{
    public:
    Animal()
    {
        cout<<"Animal的构造函数被调用了"<<endl;
    }
    ~Animal()
    {
        cout<<"Animal的析构函数被调用了"<<endl;
    }
    public:
    string* m_name;
    virtual void speak()//虚函数，使用virtual关键字修饰，表示该函数可以被子类重写
    {
        cout<<"动物在说话"<<endl;
    }
};
class Cat:public Animal
{
    
    public:
    Cat(string name)
    {
        m_name = new string(name);
        cout<<"Cat的构造函数被调用了"<<endl;
    }
    ~Cat()
    {
        if(m_name != nullptr)
        {
            delete m_name;
            m_name = nullptr;
        }
        cout<<"Cat的析构函数被调用了"<<endl;
    }
    string* m_name;
    void speak()//重写父类的虚函数，使用相同的函数名和参数列表
    {
        cout<<*m_name<<"在说话"<<endl;
    }
};
void test01()
{
    Cat *cat = new Cat("Tom");
    cat->speak();
    delete cat;
}
int main()
{
    test01();
    return 0;
};
