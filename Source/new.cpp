#include <iostream>
using namespace std;
int* createArray(int size){
    int* arr = new int[size];
    for(int i=0;i<size;i++){
        arr[i] = i+1;
    }
    return arr;
}
int main(){
int *p=createArray(10);
for(int i=0;i<10;i++){
    cout <<p[i]<<" ";
}
    delete[] p;
    system("pause");
    return 0;

}