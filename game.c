#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;
    srand(time(0));
    number = rand() % 10 + 1;
    printf("WELCOME TO BRAIN GAME\n");
    do
    {
        printf("The number is %d\n", number);
        scanf("%d", &guess);
        if (number == guess)
        {
            number *= rand() % 10 + 1;
        }
        else
        {
            printf("Your guess is not correct\n");
            printf("THANK YOU FOR PLAYING BRAIN GAME");
            break;
        }
    } while (number != guess);

    return 0;
}