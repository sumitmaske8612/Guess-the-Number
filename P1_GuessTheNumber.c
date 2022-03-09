#include <stdio.h>
#include <stdlib.h> //For random number generation
#include <time.h>   //for time function

int main()
{

    int num, guess, nguesses = 1;
    srand(time(0));         // initialization and  time(0) returns time in second
    num = rand() % 100 + 1; // Generates random number from 0 to 100

    //printf("The number is %d\n", num);      // This is the random number 

    do
    {
        printf("Guess the number from 1 to 100\n");
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Please !!! Guess the lower number \n");
        }
        else if (guess < num)
        {
            printf("Please !!! Guess the higher number \n");
        }
        else
        {
            printf("Congratulation, You won !!!  You guessed it in %d attempts!!!\n", nguesses);
        }
        nguesses++;
    } while (guess != num);

    return 0;
}