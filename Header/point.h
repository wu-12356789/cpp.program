#pragma once
#include<iostream>

using namespace std;

class Point
{
    public:
    void setX(int &x);//设置x坐标
    void setY(int &y);//设置y坐标
    int getX() const;//获取x坐标
    int getY() const;//获取y坐标
    private:
        int m_x;
        int m_y;
};