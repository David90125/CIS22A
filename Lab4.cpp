#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main(void)
{
	char c1, c2='0', c3 = '0', c4 = '0', c5 = '0';
	unsigned int ui1=0, ui2 = 0, ui3 = 0, ui4 = 0, ui5 = 0;

	/* initialize random seed: */
	// I cast time's return to unsigned int to get rid of the warning during compile.
	srand((unsigned int)time(NULL));

	cout << "Lab 4\n Enter 5 vowel characters (a,e,i,o,u) separated by spaces: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	//cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl;
	
	// Note:  Obviously the following sections could have been implemented much easier in a function call.
	//        The purpose of this assignment was to have students recognize repeatable code so when the next section
	/*        introduced function calls, we would see the relevance from a previous assignment.  */
	//1
	if (c1 == 'a' || c1 == 'A')
	{
		ui1=  rand() % 20 + 1;   // v3 in the range 1985-2014 
	}
	else if(c1 == 'e' || c1 == 'E')
	{
		ui1 = rand() % 20 + 21;   // v3 in the range 1985-2014 
	}
	else if (c1 == 'i' || c1 == 'I')
	{
		ui1 = rand() % 20 + 41;   // v3 in the range 1985-2014 
	}
	else if (c1 == 'o' || c1 == 'O')
	{
		ui1 = rand() % 20 + 61;   // v3 in the range 1985-2014 
	}
	else if (c1 == 'u' || c1 == 'U')
	{
		ui1 = rand() % 20 + 81;   // v3 in the range 1985-2014 
	}
	else
	{
		ui1 = 0;
	}

	//2
	if (c2 == 'a' || c2 == 'A')
	{
		ui2 = rand() % 20 + 1;   // v3 in the range 1985-2014 
	}
	else if (c2 == 'e' || c2 == 'E')
	{
		ui2 = rand() % 20 + 21;   // v3 in the range 1985-2014 
	}
	else if (c2 == 'i' || c2 == 'I')
	{
		ui2 = rand() % 20 + 41;   // v3 in the range 1985-2014 
	}
	else if (c2 == 'o' || c2 == 'O')
	{
		ui2 = rand() % 20 + 61;   // v3 in the range 1985-2014 
	}
	else if (c2 == 'u' || c2 == 'U')
	{
		ui2 = rand() % 20 + 81;   // v3 in the range 1985-2014 
	}
	else
	{
		ui2 = 0;
	}

	//3
	if (c3 == 'a' || c3 == 'A')
	{
		ui3 = rand() % 20 + 1;   // v3 in the range 1985-2014 
	}
	else if (c3 == 'e' || c3 == 'E')
	{
		ui3 = rand() % 20 + 21;   // v3 in the range 1985-2014 
	}
	else if (c3 == 'i' || c3 == 'I')
	{
		ui3 = rand() % 20 + 41;   // v3 in the range 1985-2014 
	}
	else if (c3 == 'o' || c3 == 'O')
	{
		ui3 = rand() % 20 + 61;   // v3 in the range 1985-2014 
	}
	else if (c3 == 'u' || c3 == 'U')
	{
		ui3 = rand() % 20 + 81;   // v3 in the range 1985-2014 
	}
	else
	{
		ui3 = 0;
	}

	//4
	if (c4 == 'a' || c4 == 'A')
	{
		ui4 = rand() % 20 + 1;   // v3 in the range 1985-2014 
	}
	else if (c4 == 'e' || c4 == 'E')
	{
		ui4 = rand() % 20 + 21;   // v3 in the range 1985-2014 
	}
	else if (c4 == 'i' || c4 == 'I')
	{
		ui4 = rand() % 20 + 41;   // v3 in the range 1985-2014 
	}
	else if (c4 == 'o' || c4 == 'O')
	{
		ui4 = rand() % 20 + 61;   // v3 in the range 1985-2014 
	}
	else if (c4 == 'u' || c4 == 'U')
	{
		ui4 = rand() % 20 + 81;   // v3 in the range 1985-2014 
	}
	else
	{
		ui4 = 0;
	}

	//5
	if (c5 == 'a' || c5 == 'A')
	{
		ui5 = rand() % 20 + 1;   // v3 in the range 1985-2014 
	}
	else if (c5 == 'e' || c5 == 'E')
	{
		ui5 = rand() % 20 + 21;   // v3 in the range 1985-2014 
	}
	else if (c5 == 'i' || c5 == 'I')
	{
		ui5 = rand() % 20 + 41;   // v3 in the range 1985-2014 
	}
	else if (c5 == 'o' || c5 == 'O')
	{
		ui5 = rand() % 20 + 61;   // v3 in the range 1985-2014 
	}
	else if (c5 == 'u' || c5 == 'U')
	{
		ui5 = rand() % 20 + 81;   // v3 in the range 1985-2014 
	}
	else
	{
		ui5 = 0;
	}



	cout << "The random numbers are " << ui1 << " " << ui2 << " " << ui3 << " " << ui4 << " " << ui5 << "\n ";
	
	return 1;
}

/*


The program asks user to enter five single characters separated by spaces, and depending on the characters, it will generate a random number.

Use “cin” to read 5 individual characters. Use variable with “char” type to store the 5 inputs.
Use rand() and srand() functions. Make sure to include all necessary library cstdlib and ctime; 
if not CodeBlocks will give error on Windows and I will deduct points.

DO NO USE LOOP AND STRING.


Here are the rules:
- If input character is 'a', program will generate a random number from 1 to 20.
- If input character is 'e', program will generate a random number from 21 to 40.
- If input character is 'i', program will generate a random number from 41 to 60.
- If input character is 'o', program will generate a random number from 61 to 80.
- If input character is 'u', program will generate a random number from 81 to 100.
- If input character is not one of the above characters, display a 0 in the output.



*/