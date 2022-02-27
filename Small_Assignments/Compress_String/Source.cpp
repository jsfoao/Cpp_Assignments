#include <iostream>
#include <map>
#include <string>

using namespace std;

string compress_string(string str)
{
	map<char, int> mp;

	for (size_t i = 0; i < str.length(); i++)
	{
		mp[str[i]]++;
	}

	string output;
	for (auto const& kvp : mp)
	{
		output += kvp.first + to_string(kvp.second);
	}
	return output;
}

string decompress_string(string str)
{
	map<char, int> mp;

	string str_value = "0";
	int value;
	char key = str[0];

	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			// add value to previous key
			value = stoi(str_value);
			mp[key] = value;

			// new key and reset
			key = str[i];
			str_value = "";
		}
		else
		{
			str_value += str[i];

			if (i + 1 == str.length())
			{
				value = stoi(str_value);
				mp[key] = value;
				break;
			}
		}
	}

	string output;
	for (auto const& kvp : mp)
	{
		for (size_t i = 0; i < kvp.second; i++)
		{
			output += kvp.first;
		}
	}
	return output;
}

bool is_digit(char ch) 
{
	int n = (int)(ch - '0');
	if (n >= 0 && n <= 9)
	{
		return 1;
	}
	return 0;
}

int main()
{
	string str = "aaaabbbcc";
	string compressed = compress_string(str);
	string decompressed = decompress_string(compressed);
	cout << "String: " << str << endl;
	cout << "Compressed: " << compressed << endl;
	cout << "Decompressed: " << decompressed << endl;
}