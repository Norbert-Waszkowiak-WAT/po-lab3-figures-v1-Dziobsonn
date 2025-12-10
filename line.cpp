#include "line.h"
#include <sstream>
Line::Point a;
Line::Point b;
Line::Line(Point a,Point b):a(a),b(b){}
Line::Line(Point &other):a(other.a),b(other.b){}
bool Line::equals(Point &other){
    return a.equals(other.a) && b.equals(other.b)
}
a.flip();
b.flip();
void Line::move(){
        a.move(x,y);
        b.move(x,y);
    }

std::string Line::toString(){
    return "Line("+a.toString()+ ", "+b.toString();
}


};