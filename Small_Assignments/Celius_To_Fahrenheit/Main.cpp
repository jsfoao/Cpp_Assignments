#include <iostream>

using namespace std;

float ConvertToFahrentheit(float celsius)
{
	return celsius * 9 / 5 + 32;
}

int main()
{
	cout << "Convert to Fahrentheit: " << ConvertToFahrentheit(36) << endl;
}