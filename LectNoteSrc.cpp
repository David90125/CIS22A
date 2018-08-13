// This is Wednesday after midterm.
// Monday before midterm had few notes.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(void)
{
	
	cout << "hello\n";
	for (int r = 0; r < 5; ++r)
	{
		for (int c = 0; c < 8; c++)
		{
			cout << c << " " << r << " | ";
		}
		cout << endl;
	}  // outer for

	cout << "first\n";
	ofstream myOutFile;
	myOutFile.open("demoFile.txt");
	if (myOutFile)
	{
		myOutFile << "lineOne\n";
		myOutFile << "lineTwo\n";
		myOutFile << "linethree\n";
		myOutFile << "linefour\n";
		myOutFile.close();
	}
	else
	{
		cout << "error opening file to write\n";
	}

	cout << "second\n";
	ifstream inFile;
	string s1, s2, s3, s4;
	inFile.open("demoFile.txt");
	if (inFile)
	{
		inFile >> s1 >> s2 >> s3 >> s4;
		inFile.close();
	}
	else
	{
		cout << "error opening file to read\n";
	}
	cout << s1 << ", " << s2 << ", " << s3 << ", " << s4 << "\n ";

	cout << "third\n";
	inFile.open("demoFile.txt");
	if (inFile)
	{
		while (inFile >> s1)    
		{
			// while(inFile >> num1 >> s1)    is also viable if the file format matches that.
			// as would be the following
			// while(inFile >> num1)
			//  inFile >> s1
			cout << "Read " << s1 << endl;
			//inFile >> s1 >> s2 >> s3 >> s4;
		}
		inFile.close();
	}
	else
	{
		cout << "error opening file to read\n";
	}



	cout << "goodbye\n";

	// homework 3 URL   https://tinyurl.com/ycfrvyja
	
	// lab5 has 
	// row 1 is 'Numbers" (no quotes
	// rest of file is a bunch of numbers separated by tab or spaces.
	// sum, count, largest, smallest

	// Tony Googled the following
//	c++ lowest integer 
// and found INT_MIN and INT_MAX if I include <climits>
	// Tony lives 1.5 miles from the lottery winning store
	// show Tony the Reddit link for, 'you've just won the lottery, you are screwed'


	return 1;
}