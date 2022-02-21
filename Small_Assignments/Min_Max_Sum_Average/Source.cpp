#include <iostream>	

using namespace std;

int min(int* arr, int n)
{
	int min = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int max(int* arr, int n)
{
	int max = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int sum(int* arr, int n)
{
	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float average(int* arr, int n)
{
	return sum(arr, n) / n;
}

void min_max_sum_average(int* arr, int n)
{
	cout << "Min: " << min(arr, n) << endl;
	cout << "Max: " << max(arr, n) << endl;
	cout << "Sum: " << sum(arr, n) << endl;
	cout << "Average: " << average(arr, n) << endl;
}

int main()
{
	int n = 5;
	int arr[5] = {2, 5, 1, 10, 3};

	min_max_sum_average(arr, n);
}