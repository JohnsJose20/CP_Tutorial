/*Authore: Johns Jose
3. Write a program in C to display the multiplication table from 1 to 5. */

#include <stdio.h>
int main() 
{
    int i, j;

    for (i = 1; i <= 5; i++) 
    {
        printf("Multiplication Table of %d:\n", i);

        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n"); 
    }

    return 0;
}
