#include<stdio.h>

int main()
{
    int a = 0;
    int d = 45;//Ramdomize it
    while (a != d)
    {
        printf("Guess the number: ");
        scanf("%d",&a);
        if ((d-a) >= 10)
        {
            printf("Too less\n");
        }
        else if(a < d)
        {
            printf("Move a bit high.\n");
        }
        else if((a - d) >= 10)
        {
            printf("Too high\n");
        }
        else if(a > d)
        {
            printf("Move a bit less.\n");
        }
    }
    printf("Guessed Correectly.\n");
    return 0;
}