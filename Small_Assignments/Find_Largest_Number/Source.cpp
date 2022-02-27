#include <iostream>

template <class T>
T largest(T a, T b)
{
	return (a > b ? a : b);
}
int main()
{
	int a = 2;
	int b = 10;
	float x = 1.2f;
	float y = 3.5f;
	std::cout << "Largest int: " << largest<int>(a, b) << std::endl;
	std::cout << "Largest float: " << largest<float>(x, y) << std::endl;
}