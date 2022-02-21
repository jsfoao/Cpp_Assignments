#include <iostream>
using namespace std;

bool IsEven(int num)
{
	return num % 2 == 0;
}

void PrintEvenOrOdd(int num)
{
	if (IsEven(num))
	{
		cout << num << " is even" << endl;
	}
	else
	{
		cout << num << " is odd" << endl;
	}
}

int main()
{
	PrintEvenOrOdd(10);
}