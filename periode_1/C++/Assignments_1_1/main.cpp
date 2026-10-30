#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1;
    Point p2(1, 1);
    Point p3(3, 4);

    cout << "From "; p1.print();
    cout << " to "; p2.print();
    cout << " is "; cout << p1.distanceTo(p2);
    cout << "\t";

    cout << "From "; p1.print();
    cout << " to "; p3.print();
    cout << " is "; cout << p1.distanceTo(p3);
    cout << endl;
    return 0;
}
