#include<iostream>
using namespace std;
#include "point.h"
void Point::setX(int &x)
{
    m_x = x;
}
void Point::setY(int &y)
{
    m_y = y;
}
int Point::getX() const
{
    return m_x;
}
int Point::getY() const
{
    return m_y;
}