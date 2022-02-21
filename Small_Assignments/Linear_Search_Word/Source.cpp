#include <iostream>

using namespace std;

bool linear_search_word(char* str, char* word, size_t str_n, size_t word_n)
{
	int j = 0;
	for (size_t i = 0; i < str_n; i++)
	{
		if (str[i] == word[j])
		{
			j++;
			if (j == word_n - 1)
			{
				return 1;
			}
		}
		else
		{
			j = 0;
		}
	}
	return 0;
}


int main()
{
	char sentence[21] { "Hello my name is Ada" };
	char word[5] = { "Ada" };

	cout << "Sentence: " << sentence << endl;
	if (linear_search_word(sentence, word, sizeof(sentence), sizeof(word)) == 0)
	{
		cout << "Sentence does not contain word: " << word << endl;
	}
	else
	{
		cout << "Sentence contains word: " << word << endl;
	}
}