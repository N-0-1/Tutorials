# Assignments 1.1: Creating a new Point class


Create a new C++ project with QtCreator.

Write a program to do the following:

- Add an additional class called Point to the project, by adding two more files: point.h and point.cpp
- The Point class contains two private integers called x and y.
- In the default constructor, set x and y to 0.
- Create an overloaded constructor with both x and y as a parameter.
- Create getters and setters for x and y.
- Create a function to print the point with the following format: (x,y)<br>
  For example: (0,0)<br>
  Use the following function prototype:void Point::print() const;
- Create a function that calculates the distance to another point (by using Pythagoras' theorem).<br>
  Use the following function prototype:float Point::distanceTo(const Point p) const;
- In main, create the following three points:    Point p1;    Point p2(1,1);    Point p3(3,4);
- Print to cout the distance from p1 to p2 and from p1 to p3. The output might look like this:<br>
  From (0,0) to (1,1) is 1.41421         From (0,0) to (3,4) is 5