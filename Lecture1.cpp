// Lecture1.cpp : Defines the entry point for the console application.
//
//
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int count = 7, a, b=4;
	a = 3;
	auto bb = 4;  // C++11 allows the use of auto
	std::cout << "Hello world " << count <<  " "<< a << " " << b << std::endl;
	//cout << "\u2663";  // attempting to print unicode  this is not working, but it does on his
	bb = bb + 1;
	cout << endl;
    return 0;
}

