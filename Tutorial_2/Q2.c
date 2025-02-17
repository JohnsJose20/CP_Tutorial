/*Authore: Johns Jose
2.  Write a C program to calculate the factorial of a given number using a while loop. 
Validate the input to ensure it is a positive integer. */

#include <stdio.h>
int main() 
{
    int num, factorial = 1, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num < 0) 
    {
        printf("Invalid input! Please enter a non-negative number: ");
        scanf("%d", &num);
    }

    i = num; 

    while (i > 1) 
    {
        factorial *= i;
        i--;
    }

    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}

