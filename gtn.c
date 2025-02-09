#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 101;

    int guess;

    int num_attempts;

    printf("Enter the number of attempts you'd like : ");
    scanf("%d", &num_attempts);

    for (int i = 1; i <= num_attempts; i++)
    {
        printf("Guess your number : ");
        scanf("%d", &guess);

        if (i == num_attempts)
        {
            printf("You have exhausted all %d chance(s) and lost the number guessing game!", num_attempts);
            break;
        }

        if (guess > number)
        {
            printf("You're too high!\n");
            continue;
        }

        if (guess < number)
        {
            printf("You're too low!\n");
            continue;
        }

        if (guess == number)
        {
            printf("You have guessed the number! The number was %d", number);
            break;
        }
    }

    return 0;
}