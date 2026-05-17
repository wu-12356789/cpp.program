#include<iostream>
using namespace std;
class BasePage
{
    public:
    void header()
    {
        cout<<"主页，分享"<<endl;
    }
    void footer()
    {
        cout<<"查看，路径"<<endl;
    }
    void content()
    {
        cout<<"视频分享"<<endl;
    }
};
class Python : public BasePage
{
    public:
    void left()
    {
        cout<<"这是python教学"<<endl;
    }
};
class Cpp : public BasePage
{
    public:
    void left()
    {
        cout<<"这是cpp教学"<<endl;
    }
};
void test01()
{
    Python py;
    py.header();
    py.content();
    py.footer();
    py.left();
};
void test02()
{
    Cpp cpp;
    cpp.header();
    cpp.content();
    cpp.footer();
    cpp.left();
};
int main()
{
    test01();
    cout<<"------------------"<<endl;
    test02();
    return 0;
}