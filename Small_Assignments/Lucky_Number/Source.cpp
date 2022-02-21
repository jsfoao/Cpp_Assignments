#include <iostream>
using namespace std;

bool lucky_number(int num)
{
	int currentDigit = num % 10;
	while (true)
	{
		int nextDigit = (num / 10) % 10;

		if (nextDigit == 0)
		{
			return 1;
		}

		if (currentDigit != nextDigit)
		{
			return 0;
		}
		num = num / 10;
		currentDigit = num % 10;
	}
	return 1;
}

int main()
{
	int number = 3333333;

	if (lucky_number(number) == 1)
	{
		cout << number << " is lucky";
	}
	else
	{
		cout << number << " is not lucky";
	}
}