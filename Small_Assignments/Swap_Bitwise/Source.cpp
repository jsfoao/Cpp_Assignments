#include <iostream>

using namespace std;

void swap_bitwise(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int a = 3;
	int b = 7;

	swap_bitwise(&a, &b);

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
}