#include "Triangle.h"

Triangle::Triangle(double a, double b, double c)
	:angle_A(a),angle_B(b),angle_C(c)
{}

double Triangle::Perimeter() const
{
	return angle_A + angle_B + angle_C;
}

void Triangle::print() const
{
	cout << "~~~~TRIANGLE~~~~" << endl;
}

double Triangle::Area() const
{
	return 0.5* angle_A*angle_B*angle_C;
}

Rectangle::Rectangle(double a, double b)
	:angle_a(a), angle_b(b)
{}

double Rectangle::Area() const
{
	return angle_a*angle_b;
}

double Rectangle::Perimetr() const
{
	return 2*angle_a*angle_b;
}

void Rectangle::print() const
{
	cout << "~~~~RECTANGLE~~~~" << endl;
}

Circle::Circle(double r)
	:radius(r)
{}

double Circle::Area() const
{
	return 3.14*radius;
}

double Circle::Perimetr() const
{
	return 3.14*2*radius;
}

void Circle::print() const
{
	cout << "~~~~CIRCLE~~~~" << endl;
}
