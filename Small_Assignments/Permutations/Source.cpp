#include <iostream>

using namespace std;

void permute(std::string str, int l, int r)
{
	if (l == r)
	{
		cout << str << endl;
	}

	for (size_t i = l; i <= r; i++)
	{
		std::swap(str[l], str[i]);
		permute(str, l + 1, r);
		std::swap(str[l], str[i]);
	}
}

int main() 
{
	std::string str = "ABC" ;
	permute(str, 0, str.length() - 1);
}