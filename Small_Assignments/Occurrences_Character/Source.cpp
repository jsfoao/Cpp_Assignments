#include <iostream>
#include <map>

using namespace std;
map<char, int> occurrences_string(char* str, size_t n)
{
	map<char, int> mp;

	for (size_t i = 0; i < n - 1; i++)
	{
		mp[str[i]] += 1;
	}

	return mp;
}

void print_arr(int* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}

void print_map(map<char, int> mp)
{
	for (auto const& x : mp)
	{
		cout << x.first << ": " << x.second << endl;
	}
}

int main()
{
	const size_t n = 6;
	char str[n] = { "HELLO" };

	 map<char, int> occurrences = occurrences_string(str, n);
	 print_map(occurrences);
}