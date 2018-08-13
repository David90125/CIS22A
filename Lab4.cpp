#include <iostream>
#include <cstdlib>
//#include <time>
using namespace std;


int main(void)
{
	char c1, c2, c3, c4, c5;
	unsigned int ui1=0, ui2 = 0, ui3 = 0, ui4 = 0, ui5 = 0;
	cout << "Lab 4\n Enter Five Individual Characters:";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << endl;
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
	cout << "values " << ui1 << " " << ui2 << " " << ui3 << " " << ui4 << " " << ui5 << "\n ";
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