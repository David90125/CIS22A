#include <iostream>
using namespace std;

int main(void)
{
	cout << "Begin\n";
	int i = 10;
	bool isEven = (i % 2 == 0);
	bool isOdd = !(i % 2 == 0);

	isEven = !(i % 2);
	isOdd = (i % 2);

	if (isEven)
	{
		cout << " is even";
	}

	if (!isEven)
	{
		cout << " is odd";
	}


	cout << "\ngoodbye\n";
	return 0;
}