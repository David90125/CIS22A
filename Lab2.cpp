#include <iostream>
#include <string>
using namespace std;
/*
Purpose: Demonstrate the use of string
Write the code that asks user to enter a month number (mm), day (dd), then year (yyyy) in this specific order.
The program then displays the date in the format "yyyy/mm/dd".
All variables should be string, not integer. Use string concatenation to create a new string that contains the whole date. Do not use multiple “<<” in “cout”.
*/


int main(void)
{
	
	
	cout << "Lab 2, string concatenation\n";

#if 0
	// Part A
	string month, day, year, output;
	cout << "Enter a month number(1 - 12) :";
	cin >> month;
	cout << "Enter a day(1 - 31) :";
	cin >> day;
	cout << "Enter a year(yyyy) :";
	cin >> year;
	output = month + "/" + day + "/" + year;
	cout << "The date is '" <<  output<< "'" << endl;
#endif

#if 0
	// Part B
	int inNumerator, inDenominator, inQuotient, inRemainder;
	cout << "Enter two whole numbers separated by space:";
	cin >> inNumerator >> inDenominator;
	inQuotient = inNumerator / inDenominator;
	inRemainder = inNumerator % inDenominator;
	cout << "The quotient of dividing " << inNumerator << " by " << inDenominator << " is " <<  inQuotient << endl;
	cout << "The remainder of dividing " << inNumerator << " by " << inDenominator << " is " << inRemainder << endl;
#endif

#if 1
	// Part C
	char charIn;
	int iChar;
	cout << "Enter a character: ";
	cin >> charIn;
	iChar = (int)charIn;
	cout << "The ASCII value of " << charIn << " is " << dec << iChar << " in Decimal, 0x" << hex << iChar << " in Hexadecimal, and " << oct << iChar << " in Octal." << dec << endl;
#endif

	cout << "Goodbye." << endl << endl;
	return 0;
}