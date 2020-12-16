#pragma once
#include <iostream>
using namespace std;

class Triangle
{
public:
	Triangle(double a, double b, double c);
	double Area() const;
	double Perimeter() const;
	void print() const;
private:
	double angle_A, angle_B, angle_C;
	
};

class Rectangle
{
public:
	Rectangle(double a, double b);
	double Area() const;
	double Perimetr() const;
	void print() const;
private:
	double angle_a, angle_b;

};

class Circle
{
public:
	Circle(double r);
	double Area() const;
	double Perimetr() const;
	void print() const;

private:
	double radius;
};