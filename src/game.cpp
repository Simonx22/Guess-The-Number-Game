#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 100 + 1;
	printf("Guess The Number Game\n");
	do
	{
		printf("\nType a number between 1 and 100: ");
		cin >> guess;
		tries++;
		if (guess > num)
			printf("Too high, try again.\n");
		else if (guess < num)
			printf("Too low, try again.\n");
		else
			printf("\nCorrect! \nYou took %d attempts to guess the number.\n", tries);
	} while (guess != num);

	cin.ignore();
	cin.get();
	return 0;
}