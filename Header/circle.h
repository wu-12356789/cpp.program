#pragma once
#include<iostream>
#include "point.h"
using namespace std;   
class Circle
{
    public:
    void setR(int &r);//设置半径
    void setCenter(Point &center);//设置圆心
    int getR() const;//获取半径
    Point getCenter() const;//获取圆心
    private:
        int m_r;
        Point m_center;
};
void checkPointPosition(const Circle &circle,const Point &point);//检查点与圆的位置关系

    