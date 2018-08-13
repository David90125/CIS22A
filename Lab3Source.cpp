#include <iostream>
using namespace std;

int main(void)
{
	unsigned int uiYear;

	cout << "This program determines leap year.\nEnter a year:  ";
	cin >> uiYear;

	cout << "The year " << uiYear << " is ";

	if ((uiYear % 4)) cout << "not ";   // common
	else if ((uiYear % 100));                // leap
	else if ((uiYear % 400)) cout << "not ";   // common
	else;                                   // leap

	cout << "a leap year.\n";

	cout << "Goodbye.\n";
	return 1;
}