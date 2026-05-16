#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"
int main()
{
    Point center, point;
    Circle circle;
    int x = 10;
    int y = 12;
    int x1 = 10;
    int y1= 0;
    int r = 10;
    point.setX(x);
    point.setY(y);
    center.setX(x1);
    center.setY(y1);
    circle.setCenter(center);
    circle.setR(r);
    cout << "圆心坐标: (" << circle.getCenter().getX() << ", " << circle.getCenter().getY() << ")\n";
    cout << "半径: " << circle.getR() << endl;
    cout << "点坐标: (" << point.getX() << ", " << point.getY() << ")\n";
   checkPointPosition(circle, point);

    return 0;
}