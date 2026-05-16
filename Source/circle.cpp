#include<iostream>
using namespace std;
#include "circle.h"
void Circle::setR(int &r)
{
    m_r = r;
}
void Circle::setCenter(Point &center)
{
    m_center = center;
}
int Circle::getR() const
{
    return m_r;
}
Point Circle::getCenter() const
{
    return m_center;
}
void checkPointPosition(const Circle &circle,const Point &point)
{
    if(circle.getR()*circle.getR() == (point.getX() - circle.getCenter().getX())* (point.getX() - circle.getCenter().getX()) + (point.getY() - circle.getCenter().getY())* (point.getY() - circle.getCenter().getY()))
    {
        cout << "点在圆上" << endl;
    }
    else if(circle.getR()*circle.getR() > (point.getX() - circle.getCenter().getX())* (point.getX() - circle.getCenter().getX()) + (point.getY() - circle.getCenter().getY())* (point.getY() - circle.getCenter().getY()))
    {
        cout << "点在圆内" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}