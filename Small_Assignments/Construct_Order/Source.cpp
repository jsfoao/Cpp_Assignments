#include <iostream>	

using namespace std;

class A 
{
public:
	A()
	{
		cout << "A" << endl;
		cout << "-" << endl;
	}
};

class B
{
public:
	B()
	{
		A a = A();
		cout << "B " << endl;
		cout << "-" << endl;
	}
};

class C
{
public:
	C()
	{
		B b = B();
		cout << "C " << endl;
		cout << "-" << endl;
	}
};

int main()
{
	C c = C();
}