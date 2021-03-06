// Quiz 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
	const double pi = 3.14159;

public:
	Circle();
	Circle(double radius);

	void setRadius(double radius);
	double getRadius();
	double getArea();
	double getDiameter();
	double getCircumference();
};

Circle::Circle() {
	radius = 0.0;
}

Circle::Circle(double radius) {
	this->radius = radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}

double Circle::getRadius() {
	return radius;
}

double Circle::getArea() {
	return pi * radius * radius;
}

double Circle::getDiameter() {
	return radius * 2;
}

double Circle::getCircumference() {
	return 2 * pi * radius;
}

int main()
{
	double radius;
	cout << "Please enter the radius of the circle: ";
	cin >> radius;
	Circle circle = Circle(radius);

	cout << "The circle's area is: " << circle.getArea() << endl;
	cout << "The circle's diameter is: " << circle.getDiameter() << endl;
	cout << "The circle's circumference is: " << circle.getCircumference() << endl;
    return 0;
}
