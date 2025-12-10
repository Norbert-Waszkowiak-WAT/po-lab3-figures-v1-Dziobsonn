#define TRIANGLE
#DEFINED TRIANGLE
#include <sstream>
#include "point.h
class Line{
private:
Point a;
Point b;
point c;
public:
Triangle(Point a,Point b);
Triangle(Triangle &other);
bool equals(Triangle &other);
void flip();
void move(double a, double b);
std::string toString();
 
 
};
#endif