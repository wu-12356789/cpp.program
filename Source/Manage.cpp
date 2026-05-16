#include <iostream>
#include <string>
#include <limits>
using namespace std;
#define MAX 1000 //通讯录最大容量
void showMenu(){
    cout<<"*****通讯录管理系统*****"<<endl;    
    cout<<"*****1·添加联系人*****"<<endl;
    cout<<"*****2·显示联系人*****"<<endl;
    cout<<"*****3·删除联系人*****"<<endl;
    cout<<"*****4·查找联系人*****"<<endl;
    cout<<"*****5·修改联系人*****"<<endl;
    cout<<"*****6·清空联系人*****"<<endl;
    cout<<"*****0·退出通讯录*****"<<endl;
    cout<<"*************************"<<endl;

}

    
//联系人结构体
struct Person{
    string name;//姓名
    int age;//年龄
    int sex;//性别，0为女，1为男
    string phone;//电话号码
    string address;//家庭住址
};
//通讯录结构体
struct AddressBook{
    Person personArray[MAX];
    int size;//通讯录中当前人数
};
void addPerson(AddressBook* ab){
    if(ab->size >= MAX){
        cout<<"通讯录已满，无法添加！"<<endl;
        return;
    }
    else{
    cout<<"请输入姓名："<<endl;
    cin>>ab->personArray[ab->size].name;
    cout<<"请输入年龄："<<endl;
    cin>>ab->personArray[ab->size].age;
    cout<<"请输入性别：(0为女，1为男)"<<endl;
    cin>>ab->personArray[ab->size].sex;
    cout<<"请输入电话号码："<<endl;
    cin>>ab->personArray[ab->size].phone;   
    cout<<"请输入家庭住址："<<endl;
    cin>>ab->personArray[ab->size].address;
    ab->size++;
    cout<<"添加成功！现在通讯录中有"<<ab->size<<"个人"<<endl;}
    
}
void showPerson(AddressBook ab){
    if(ab.size == 0){
        cout<<"通讯录为空！"<<endl;
        return;
    }
    else{
        for(int i=0;i<ab.size;i++){
            cout<<"姓名："<<ab.personArray[i].name<<"\t";
            cout<<"年龄："<<ab.personArray[i].age<<"\t";
            if(ab.personArray[i].sex == 0){
                cout<<"性别：女\t";
            }
            else{
                cout<<"性别：男\t";
            }
            cout<<"电话号码："<<ab.personArray[i].phone<<"\t";
            cout<<"家庭住址："<<ab.personArray[i].address<<endl;
                                }
        }
}
int main()
{
    int select = 0;//用户输入的选项
 AddressBook ab;//创建通讯录对象
            ab.size = 0;//初始化通讯录人数为0
    //菜单调用
    while (true) 
    {
        showMenu();
        cin>>select;//用户输入选项
        
        switch(select){
        case 1:     //添加联系人
            cout<<"添加联系人"<<endl;
            addPerson(&ab);//传入通讯录地址，添加联系人
            break;
        case 2:     //显示联系人
            showPerson(ab);//传入通讯录对象，显示联系人
            
            break;
        case 3:     //删除联系人
            
            break;
        case 4:     //查找联系人
            
            break;  
        case 5:     //修改联系人
            
            break;
        case 6:     //清空联系人
            
            break;
        case 0:     //退出通讯录
            cout<<"欢迎下次使用！"<<endl;
            system("pause");
            return 0;
            break;
        default:
            cout<<"输入错误，请重新输入！"<<endl;
            break;
        }
    }
    system("pause");
    return 0;
}
