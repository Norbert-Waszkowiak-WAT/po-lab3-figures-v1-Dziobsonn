#define POINT
#defined POINT
#include <sstream>
class point{
private:
double x;
double y;
public:
Point(double x, double y);
Point(Point &other);
bool equals(Point &other);
double getx();
double gety();
void flip;
void move(double x,double y)
std::string toString();



};
#endif POINT