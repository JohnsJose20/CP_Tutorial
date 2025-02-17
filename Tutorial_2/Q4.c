/*Authore: Johns Jose
4. Write a C program to count number of digits in a number. */

#include <stdio.h>
int main() 
{
    int num, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) 
    {
        count = 1;
    } 
    else 
    {    
        for (int n = num; n != 0; n /= 10) 
        {
            count++;
        }
    }

    printf("The number of digits is: %d\n", count);

    return 0;
}


