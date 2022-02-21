#include <iostream>

using namespace std;

void print_arr(int* arr, int count)
{
	for (size_t i = 0; i < count; i++)
	{
		cout << i << ": " << arr[i] << endl;
	}
}
int total_occurrences(int* arr, int count, int num)
{
	int total = 0;
	for (size_t i = 0; i < count; i++)
	{
		if (arr[i] == num)
		{
			total++;
		}
	}
	return total;
}

int* find_occurrences(int* arr, int count, int num)
{
	int* temp = new int[count];
	int temp_i = 0;

	for (size_t i = 0; i < count; i++)
	{
		if (arr[i] == num)
		{
			temp[temp_i] = i;
			temp_i++;
		}
	}

	if (temp_i == 0)
	{
		return nullptr;
	}
	return temp;
}

int linear_search(int* arr, int count, int num)
{
	for (size_t i = 0; i < count; i++)
	{
		if (arr[i] == num)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	const int n = 5;
	int arr[n]{ 1, 2, 2, 4, 2 };
	int index = linear_search(arr, n, 10);
	int* occurences = find_occurrences(arr, n, 2);

	print_arr(occurences, total_occurrences(arr, n, 2));
}