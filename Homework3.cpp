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

int TODOmain(void)
{
	string firstName = "David", lastName = "Bengel", todayDate = "July 3, 2018";
	int num1 = 6565, num2 = 1341, num3=0, iMult;
	long double dNum1 = 123.0, dPie=0.0;
	const int iPrecision = 18;
	cout << "CIS22A Homework 3\n"; 
	cout << "This program estimates the value of PI using the Babylonian method.\n";
	cout << "Enter a count that will be used for series iteration: ";
	do {
		cin >> num1;
	} while (num1<1);

	for (int m = 1, n = 0, iMult = -1; n < num1; m += 2, n++)
	{
		iMult *= -1;
		//iMult = ((n % 2)*-1);
		//if (!iMult) iMult = 1;  //   
		dPie = dPie + (long double)iMult * sqrtl(12) * 1/(m*powl(3,n))  ;
		cout << "loop=" << setw(4) << n << "  m=" << setw(4) << m << "  sign=" << setw(2) << iMult << "    " << fixed  << setw(iPrecision+3) << setprecision(iPrecision) << dPie << endl;
	}


	cout << "Estimated PI with 15 decimal  " <<  fixed << setw(iPrecision + 3) << setprecision(iPrecision) << dPie << endl;
	cout << "PI value in the cmath library " << fixed << setw(iPrecision + 3) << setprecision(iPrecision) << M_PI << endl;


	/*
	cin >> dAxis1;
	cout << "Enter the semi-minor axis value: ";
	cin >> dAxis2;
	dFocus = sqrt(pow(dAxis1 , 2) - pow(dAxis2, 2));
	dArea = M_PI * dAxis1 * dAxis2;
	dCircumference = M_PI * (3.0 * (dAxis1 + dAxis2) - sqrt( 10.0*dAxis1*dAxis2 + 3.0*(pow(dAxis1, 2) + pow(dAxis2, 2))));

	cout << "The focus of the elipse is  \t" << setprecision(2) <<  dFocus << endl;
	cout << "The elipse area is          \t" << setprecision(2) << dArea << endl;
	cout << "The elipse circumference is \t" << setprecision(2) << dCircumference << endl;
	*/

	cout << "CIS22A Homework 3 END\n";
	return 1;
}