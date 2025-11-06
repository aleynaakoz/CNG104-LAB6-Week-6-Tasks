#include <iostream>
using namespace std;

class Circle {
private:
	double radius;

public:
	Circle(double _radius) {
		radius = _radius;
	}
	double getRadius() {
		return radius;
	}
};

void printCircleInfo(Circle c) {
	const double pi = 3.14;
	double _radius = c.getRadius();
	double circleArea = pi * _radius * _radius;
	
	cout << "Please Enter the radius: " << _radius << endl;
	cout << "Area: " << circleArea << endl;
}

int main() {
	Circle circle(5.0);
	printCircleInfo(circle);

	return 0;
}