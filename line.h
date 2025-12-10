#define LINE
#DEFINED LINE
#include <sstream>
#include "point.h"
class Line{
private:
Point a;
Point b;
public:
Line(Point a,Point b);
Line(Line &other);
bool equals(Line &other);
void flip();
void move(double a, double b);
std::string toString();
 
 
};
#endif