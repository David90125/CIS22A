/*
	This is Homework #5
	by David Bengel

*/

#define _USE_MATH_DEFINES
#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

/* Function definitions */
int countVowels(int counts[], char inputStr[], int size);
void displayCounts(string text[], int counts[], int size);


int main()
{
	const int VOWEL_CNT = 5;
	const int SIZE = 300;
	// Array of text to display counts
	string VOWELS_TEXT[VOWEL_CNT] = { "a - A", "e - E", "i - I", "o - O", "u - U" };
	char str[SIZE]; 			// input string
	int vowelCnt[VOWEL_CNT]; 	// array of vowel counts

	cout << "This program counts the vowel occurrences in input phrase\n";
	cout << "Enter a phrase and hit Enter (maximum length " << SIZE - 1 << "): ";
	cin.getline(str, SIZE);
	int totalCount;
	while (strlen(str))
	{

		// TO DO: Invoke the function countVowels with 3 parameters using the variables and constants defined above.
		totalCount = countVowels(vowelCnt, str, VOWEL_CNT);

		// TO DO: Invoke the function displayCounts with 3 parameters using the variables and constants defined above.
		displayCounts(VOWELS_TEXT, vowelCnt, VOWEL_CNT);

		cout << "Total of vowels is  " << totalCount << endl;

		cout << "Enter a phrase and hit Enter (maximum length " << SIZE - 1 << "): ";
		cin.getline(str, SIZE);

	}
	return 0;
}

int countVowels(int counts[], char inputStr[], int size)
{
	int totalVowelCount=0;

	//  Clear the vowel count array before using
	for (int i = 0; i < size; i++)
		counts[i] = 0;

	for(int i=0; inputStr[i] != NULL;i++)
	{
		switch (inputStr[i])
		{
		case 'A':
		case 'a':
			counts[0]++;
			totalVowelCount++;
			break;
		case 'E':
		case 'e':
			counts[1]++;
			totalVowelCount++;
			break;
		case 'I':
		case 'i':
			counts[2]++;
			totalVowelCount++;
			break;
		case 'O':
		case 'o':
			counts[3]++;
			totalVowelCount++;
			break;
		case 'U':
		case 'u':
			counts[4]++;
			totalVowelCount++;
			break;
		default:
			// consonant
			break;
		}
	}
	return totalVowelCount;
}

void displayCounts(string text[], int counts[], int size)
{
	cout << "Vowel \tCount\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << text[i] << "\t" << counts[i] << endl;
	}

	return;
}

