// lecture3 in class notes 7/11/18

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>  // for setprecision
using namespace std;



int main(void)
{
	double input;
	short s = 1;
	char c = 56;
	int i = 2147450000;
	int j = 100;
	double d = 1.5;
	//int j = i + d;
	cout << "Lecture 3 Tuesday 7/11/2018  l1l1l1" << endl;

	// overflow
	///////  sdfdsf
	cout << s + c;
	cout << "int i is " << i << endl;
	cout << "i * 2 is " << i * 2 << endl;  // notice overflow
	//i = i * 2;
	//cout << "overflow i is" << i << endl;
	cout << "i * j= " << i * j << endl;
	
	// type casting
	c = 56;
	cout << "print the character " << c << " (that was ASCII)  now cast it as an int  " << (int)c << endl;
	
	i = 1; j = 2;
	cout << "without casting " << i / j << endl;
	cout << "with old   casting1 " << (double)i / j << endl;
	cout << "with old   casting2 " << (double)(i / j) << endl;  // notice this did not work
	cout << "with old   casting3 " << i / (double)j << endl;

	cout << "with new   casting1 " << static_cast<double>(i) / j << endl;
	cout << "with new   casting3 " << i /  static_cast<double>(j) << endl;

	// multiple assignments
	int x,y,z;
	//cout << x = y = 5;
	cout << (x = y = 5);
	cout << (x = (y = 5));
	cout << ((x = y) = 5);

	/*
	string st;
	cout << "enter city ";
	cin >> st;
	cout << "city is " << st;
	*/
	//cout << fixed << setprecision(35) << M_PI << endl;  // M_PI is undefined, google for getaround.


	/*
	for (long int q = i; q < 3000000000; q++)
	{
		cout << i << ", ";
		i += 10;
	}
	*/

	//cout << "j is " << j;
	cout << "\npress key to continue" << endl;
	cin >> input;
	cout << endl << input << endl;
	return 12;
	// lab 2 https://tinyurl.com/cis22a-sum18-lab2
}