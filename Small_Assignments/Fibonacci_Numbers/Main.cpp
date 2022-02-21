#include <iostream>

using namespace std;

// iterative fibonacci sequence
int* iter_fibonacci(int n)
{
	int* sequence = new int[n];
	sequence[0] = 1;
	sequence[1] = 1;

	for (size_t i = 2; i < n; i++)
	{
		sequence[i] = sequence[i - 1] + sequence[i - 2];
	}

	return sequence;
}

 // recursive fibonacci
int* recur_fibonacci(int* seq, int i, int size)
{
	if (i == 0)
	{
		seq[0] = 1;
		seq[1] = 1;
		i = 2;
	}
	seq[i] = seq[i - 1] + seq[i - 2];
	i++;
	if (i == size)
	{
		return seq;
	}
	recur_fibonacci(seq, i, size);
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
	const int n = 9;
	int* iter_sequence = iter_fibonacci(n);

	int* recur_sequence = new int[n];
	recur_fibonacci(recur_sequence, 0, n);

	print_arr(iter_sequence, n);
	print_arr(recur_sequence, n);
}