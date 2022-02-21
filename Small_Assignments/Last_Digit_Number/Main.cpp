#include <iostream>
#include <string>
using namespace std;

int LastDigit(int num)
{
	return num % 10;
}

int main()
{
	cout << LastDigit(137) << endl;
}