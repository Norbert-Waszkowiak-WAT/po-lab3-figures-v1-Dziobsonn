#include <sstream>
#include "point.h"
#include <iomanip>
Point::Point(double x, double y):x(x),y(y){}
Point::Point(const Point &other):x(other.x),y(other.y){}
bool Point::equals{
    return x=other.x && y==others.y;
}
double Point::getx(){
    return x;
}
double Point::gety(){
    return y;
}
void Point::flip(){
    x=-x;
    y=-y;
}
void Point::move(){
        this -> x+=x;
        this -> y+=y;
    }
    std::string Point::toString{
        std::ostringstream oss;
        oss<<std::fixed<<std::setprecision(1);
        oss<<"Point("<<x<<" , "<<y<<")";
        return oss.str();
    }
