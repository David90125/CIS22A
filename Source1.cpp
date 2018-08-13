// https://docs.google.com/document/d/1iV7HvbJU9qHppAFXq7CAV1XF6_9-BR4xtIXQUHlf5Rc/edit
// This is the CIS22A Lab1 URL he assigned 180709
#include <iostream>
using namespace std;

int main(void)
{
	const double PI = 3.14159;
	const char* AREA_STR = "Area of circle with radius";
	const char* CIRCUM_STR = "Circumference of circle with radius";
	double radius, area, circumfrence;
	cout << "Calculate area and circumference of circle" << endl;
	cout << "Enter a radius value: ";
	cin >> radius;
	area = PI * radius * radius;
	circumfrence = 2.0 * PI * radius;
	cout << endl << AREA_STR << " " << radius << " is " << area << "." << endl;
	cout << CIRCUM_STR << " " << radius << " is " << circumfrence << '.' << endl;
	return 0;
}