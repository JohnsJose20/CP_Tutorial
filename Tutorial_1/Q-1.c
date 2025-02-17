/*Authore: Johns Jose
 1.Write a program to find prime numbers within a limit using loops.*/

#include <stdio.h>
int main() 
{
    int limit, i, j, isPrime;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are: ", limit);

    for (i = 2; i <= limit; i++) 
    {
        isPrime = 1; 

        for (j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
