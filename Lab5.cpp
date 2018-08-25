// Lab 5
// Started 1808251352

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main(void)
{
	unsigned int uiSmallest=0, uiLargest = 0;
	double dAverage = 0;

	cout << "Lab 5\n Read a file, find the smallest, largest, and average ";

	// open file
	//read file
	//do math
	// print results

	cout << "Goodbye\n";
	
	return 1;
}

/*

CIS22A Lab 5

https://tinyurl.com/cis22a-sum18-lab5

Loop and Text files
C++ program name should be “Lab5-XXXXX.cpp”

You are given an input file “numbers.txt” that contains some numbers.
The first line contains a string.  The rest of the file contains a bunch of integer numbers separated by one or more spaces. You should write the code to read the file data, then calculates and displays the average, the smallest, the largest number. The code also displays the count of numbers that are larger than the average and display the count of numbers that are smaller than the average.

Download the “numbers.txt” file and save it in the same folder as your CodeBlocks project.

Attention:
1- Do NOT hard-code any absolute file location of the input file  inside your code like this
“C:\John PC\My Documents\CIS22A\HW\numbers.txt”
because your code will fail on a PC different than yours.

Put only the file name numbers.txt in the code that opens the file.
Copy this numbers.txt file to your Code Blocks project folder on Windows PC.
If you work on the Mac, you have to use the "trick" presented on my previous lecture to find out which folder you should place the file into.

2- Do not hard-code the count of numbers in your code. Assume that the file can contain any count of numbers after the first string. If your code is well written, it should work without modification when the file contains either 50 numbers or 5000000 numbers. This is the same concept for Microsoft Word that can process your document no matter how large your document is.

3- Use setw() to format the results.
4- Do not use array or any thing that was not presented in class because it is either not needed or bad (like goto statement).
5- The input file has to first opened, processed, and closed to find the average. Then file is opened, processed, and closed again to count of numbers below and above the average.

If the file numbers.txt is not in the current Code Blocks project folder, display a meaningful error message and exit the program:




*/