#include <iostream>

using namespace std;

bool is_palindrome(char* str, int count)
{
	int range = 0;
	if ((count - 1) % 2 == 0)
	{
		range = (count - 1) / 2;
	}
	else
	{
		range = count / 2;
	}

	for (size_t i = 0; i < range; i++)
	{
		if (str[i] != str[count - 2 - i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char str[]{ "aaabbbaaa" };

	bool isPalindrome = is_palindrome(str, sizeof(str));
	cout << "String: " << str << endl;
	if (isPalindrome)
	{
		cout << "Is palindrome" << endl;
	}
	else
	{
		cout << "Not palindrome" << endl;
	}
}