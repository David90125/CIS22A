#include <iostream>
using namespace std;

int main(void)
{

	const double PI = 3.1415927;
	double circumfrence, area, radius;
	const char* AREA_STR = "Area of circle with radius ";
	const char* CIRCUM_STR = "Circumference of circle with radius ";

	cout << "Calculate area and circumference of circle\n";
	cout << "Enter your radius ";
	cin >> radius;
	area = PI * radius * radius;
	circumfrence = PI * 2.0 * radius;
	cout << AREA_STR << radius << " is " << area << "." << endl;
	cout << CIRCUM_STR << radius << " is " << circumfrence << "." << endl;

		return 0;
}