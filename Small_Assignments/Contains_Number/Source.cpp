#include <iostream>	

using namespace std;

int digits_number(int num)
{
	int totalDigits = 0;;
	int currentDigit = num % 10;
	while (true)
	{
		totalDigits++;
		int nextDigit = (num / 10) % 10;

		if (nextDigit == 0)
		{
			return totalDigits;
		}

		num = num / 10;
		currentDigit = num % 10;
	}
	return 0;
}

bool contains(int a, int b)
{
	if (digits_number(a) != 1)
	{
		return 0;
	}

	int currentDigit = b % 10;
	while (true)
	{
		if (currentDigit == a)
		{
			return 1;
		}

		int nextDigit = (b / 10) % 10;
		if (nextDigit == 0)
		{
			return 0;
		}
		b = b / 10;
		currentDigit = b % 10;
	}
	return 0;
}
int main()
{
	int a = 4;
	int b = 341;
	int c = 98756;

	cout << contains(a, b) << endl;
	cout << contains(a, c) << endl;
}