// Lab 6
// Started 180909

#include <iostream>
#include <string>
using namespace std;

int countLetterInString(string phrase, char searchChar);

int main(void)
{
	string phrase;
	char searchChar;
	int iCount;
	
	cout << "Lab 6\nCount the number of characters in phrases.  \n";

	do
	{
		cout << "\n\nEnter a phrase: ";
		getline(cin, phrase);

		if (!phrase.empty())
		{
			cout << "What character do you want to search for: ";
			cin.get(searchChar);  // This gets a single character, including a space.

			iCount = countLetterInString(phrase, searchChar);
			cout << "There were " << iCount << " of the character >" << searchChar << "< in the phrase: " << phrase << endl;
			
			// Need to clear the cin buffer so the next getline will work.
			cin.ignore();
		}
		
	} while (!phrase.empty());

	cout << "Goodbye\n";
	
	return 1;
}


int countLetterInString(string phrase, char searchChar)
{
	int iCount = 0, iPhrLength, iPosition;
	iPhrLength = phrase.length();
	for (int i = 0; i < iPhrLength; i++)
	{
		if (phrase.at(i) == searchChar)
		{
			iCount++;
		}
	}
	
	return iCount;
}


/*
CIS22A Lab 6
https://tinyurl.com/cis22a-sum18-lab6
Topic: Function and Loop

program name should be “Lab6-XXXXX.cpp” using the last 5 digits of your ID.

Write a program to accept English phrases and count the number of specific characters in the phrases.
The program should be able to go through many input and output cycles until user hits Enter key for an empty phrase input, then the program will stop.

This function prototype must be defined exactly like the following:

int countLetterInString(string phrase, char searchChar);

The main() function will call this function to get the count of character.

Input character seach character can be a space. The phase string can contain any character.
*/