#include <iostream>
#include <bitset>

using namespace std;


bool nth_bit(int num, int n)
{
	int pos = 1 << n;
	int temp = num & pos;
	return temp != 0;
}

void set_bit(int* num, int n, bool bit)
{
	int pos = ~(1 << n);
	int temp = pos & *num;
	*num = temp;
}

void clear_bit(int* num, int n, bool bit)
{
	int pos = 1 << n;
}

void print_bitset(int x)
{
	cout << bitset<32>(x) << endl;
}

int main()
{
	int a = 10;

	print_bitset(a);
	set_bit(&a, 10, 1);
	print_bitset(a);
}