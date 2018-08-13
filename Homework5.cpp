/*
	This is Homework #4
	by David Bengel

*/

#define _USE_MATH_DEFINES
#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/* Function definitions */
string formatWithHyphen(string isbn10);
bool validateInput(string isbn);
char getCheckSum(string isbn);

const int ISBNLENGTH = 9;


int main(void)
{
	string isbn;


	cout << "CIS22A Homework 4 BEGIN\n"; 




	cout <<
		"This program calculates the checksum of a 9-digit ISBN code and display the 10-digit ISBN."
		<< endl;
	cout << "Enther the 9 digits for the ISBN code or X to exit: ";
	cin >> isbn;
	while (isbn != "X")
	{
		bool isValid = validateInput(isbn);
		if (!isValid)
		{
			cout << "\nThe input ISBN code is not valid.\n";
		}
		else
		{
			char extra = getCheckSum(isbn);
			cout << "\nThe 10-digit ISBN code is " << isbn + extra << endl;
			cout << "\nThe hyphen-formatted ISBN code is " <<
				formatWithHyphen(isbn + extra) << endl;
		}
		cout << "Enter the 9 digits for the ISBN code or X to exit: ";
		cin >> isbn;
	}





	cout << "CIS22A Homework 4 END\n";
	return 1;
}


char getCheckSum(string isbn)
{
	char cReturnValue;
	int iCheckSum = 0;
	for (int i = 0 ; i < ISBNLENGTH ; ++i)
	{
		iCheckSum += (isbn.at(i) - '0') * (i + 1);
	}
	iCheckSum %= 11;
	if (iCheckSum == 10)
		cReturnValue = 'X';
	else
		cReturnValue = iCheckSum + '0';
	
	return cReturnValue;
}

bool validateInput(string isbn)
{
	bool bReturnValue = true;
	if (isbn.length() != ISBNLENGTH)
	{
		bReturnValue = false;
	}
	else
	{
		for (int i = 0; i < ISBNLENGTH; ++i)
		{
			if ( (isbn.at(i)-'0') < 0 || (isbn.at(i) - '0') > 9 )
			{
				bReturnValue = false;
				break;
			}
		}
	}

	return bReturnValue;
}


// after first, fourth, and 9th digit
string formatWithHyphen(string isbn10)
{
	isbn10.insert(9,1, '-');
	isbn10.insert(4, 1, '-');
	isbn10.insert(1, 1, '-');

	return isbn10;
}