#include <iostream>
using namespace std;

int main(void)
{
	char c;
	cout << "hello world" << endl;

#if 1  // 
	const double PI = 3.1415927;
	double circumfrence, area, radius;
	const char* AREA_STR = "Area of circle with radius ";
	const char* CIRCUM_STR = "Circumference of circle with radius ";

	cout << "Calculate area and circumference of circle";
	cout << "Enter your radius ";
	cin >> radius;
	area = PI * radius * radius;
	circumfrence = PI * 2.0 * radius;
	cout << AREA_STR << radius << " is " << area << "." << endl;
	cout << CIRCUM_STR << radius << " is " << circumfrence << "." << endl;



#endif

	cout << "press a character and return ";
	cin >> c;

	return 0;
}