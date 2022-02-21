#include <iostream>
#include "Swap.h"

using namespace std;

// generics declaration???
void swap_char(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse_collection(char* str, int count)
{
	if (count <= 2){ return;}

	for (size_t i = 0; i < count - 1; i++)
	{
		if (i == count - 2 - i){ return; }

		if (count - 2 - i == i + 1)
		{
			swap_char(&str[i], &str[count - 2 - i]);
			return;
		}
		swap_char(&str[i], &str[count - 2 - i]);
	}
}

int main()
{
	char str[]{ "mamacita" };

	cout << "Collection: " << str << endl;
	reverse_collection(str, sizeof(str));
	cout << "Reversed: " << str << endl;

	reverse_collection(str, sizeof(str));
}