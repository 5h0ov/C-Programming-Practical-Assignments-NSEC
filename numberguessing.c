#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guess(int N)
{
	int num, guess, numberofguess = 0;
	// Seed random number generator
	srand(time(NULL)); // we don't need this if we pass an inputted N to guess and not an initialized variable
	// Generate a random number
	num = rand() % N; // int number = a + rand( ) % n; a = the first number in your range, n = the number of terms in your range(range computed by  largest value - smallest value + 1)
	printf("Guess a number between 1 and %d\nNote: You get only 9 tries!\n",N);
	do {
		if (numberofguess > 9)
        {
			printf("\nYou Lose!");
			break;
		}
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("Lower number please!\n");
			numberofguess++;
		}
		else if (num > guess)
		{
			printf("Higher number please!\n");
			numberofguess++;
		}
		else
			printf("You guessed the number in %d attempts!\n",numberofguess);

	} while (guess != num);
}

void main()
{
    int N;
    printf("Enter the value of N for the range of guessing numbers: ");
    scanf("%d",&N);
	guess(N);
}
