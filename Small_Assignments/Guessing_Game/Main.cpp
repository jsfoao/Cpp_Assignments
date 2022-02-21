#include <iostream>
using namespace std;

void main()
{
	int min = 1;
	int max = 10;
	int guess;

	srand(time(NULL));
	int number = rand() % max + min;

	bool quit = false;
	while (!quit)
	{
		cout << "Guess between " << min << " and " << max << endl;
		cin >> guess;
		if (guess == number)
		{
			cout << "You guessed right number: " << number;
			quit = true;
		}
	}
}