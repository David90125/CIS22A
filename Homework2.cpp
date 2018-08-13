/*
	This is Homework #2
	by David Bengel

*/

#define _USE_MATH_DEFINES
#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(void)
{
	string firstName = "David", lastName = "Bengel", todayDate = "July 3, 2018";
	int num1 = 6565, num2 = 1341, num3=0;
	double dNum1 = 123.0, dAxis1, dAxis2, dFocus, dArea, dCircumference;
	cout << "CIS22A Homework 2\n"; 
	cout << "This program calculates the focus, area, and circumference of an ellipse.\n";
	cout << "Enter the semi-major axis value: ";
	cin >> dAxis1;
	cout << "Enter the semi-minor axis value: ";
	cin >> dAxis2;
	dFocus = sqrt(pow(dAxis1 , 2) - pow(dAxis2, 2));
	dArea = M_PI * dAxis1 * dAxis2;
	dCircumference = M_PI * (3.0 * (dAxis1 + dAxis2) - sqrt( 10.0*dAxis1*dAxis2 + 3.0*(pow(dAxis1, 2) + pow(dAxis2, 2))));

	cout << "The focus of the elipse is  \t" << setprecision(2) <<  dFocus << endl;
	cout << "The elipse area is          \t" << setprecision(2) << dArea << endl;
	cout << "The elipse circumference is \t" << setprecision(2) << dCircumference << endl;


	cout << "CIS22A Homework 2 END\n";
	return 1;
}