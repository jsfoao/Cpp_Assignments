#include <iostream>

using namespace std;

void swap_stl(int& a, int& b)
{
	swap(a, b);
}

void swap_reference(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_pointers(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_math(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

template<typename T>
void swap_generic(T(&a), T(&b))
{
	T temp = a;
	a = b;
	b = temp;
}