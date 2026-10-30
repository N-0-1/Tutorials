#include "point.h"
#include <cmath>
#include <iostream>
using namespace std;

Point::Point() : Point(0, 0){

}
Point::Point(int x, int y): x(x), y(y){

}
void Point::set_x(int _x) {
    x = _x;
}
void Point::set_y(int _y){
    y = _y;
}
int Point::get_x(){
    return x;
}
int Point::get_y(){
    return y;
}
void Point::print() const{
    cout << "(" << x << "," << y << ")";
}
float Point::distanceTo(const Point p) const{
    return sqrt((x - p.x) * (x - p.x)+ (y - p.y) * (y - p.y));
}