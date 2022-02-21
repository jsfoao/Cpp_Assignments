#include <iostream>

using namespace std;

int occurrences_string(char* str, int n)
{
	int* occurrences = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		cout << str[i] << endl;
	}
}

void print_arr(int* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}

int main()
{
	const int n = 6;
	char str[n] = { "HELLO" };

	int occurrences = occurrences_string(str, n);
	print_arr(&occurrences, sizeof(occurrences));
}