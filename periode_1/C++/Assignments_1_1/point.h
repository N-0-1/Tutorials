#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point();
    Point(int _x, int _y);
    void set_x(int _x);
    void set_y(int _y);
    int get_x();
    int get_y();
    void print() const;
    float distanceTo(const Point p) const;
private:
    int x;
    int y;
};

#endif // POINT_H
