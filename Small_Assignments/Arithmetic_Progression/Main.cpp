#include <iostream>
#include "Math.h"
using namespace std;

bool arithmetic_progression(int* arr, int count)
{
	if (count < 2)
	{
		return false;
	}

	int diff = abs_difference(arr[0], arr[1]);

	for (size_t i = 0; i < count; i++)
	{
		if (arr[i] != arr[1] + (i - 1) * diff)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	const int length = 5;
	int progr[length]{ 2, 4, 6, 8, 10 };

	bool validate = arithmetic_progression(progr, length);
	if (validate)
	{
		cout << "Is arithmetic progression" << endl;
	}
	else
	{
		cout << "Not arithmetic progression" << endl;
	}
}