/*Authore: Johns Jose
3.  Write a C program to find sum of even numbers in a given range.(Exclusive of limit) */

#include <stdio.h>
int main() 
{
    int start, end, sum = 0, i;

    printf("Enter the start number: ");
    scanf("%d", &start);
    
    printf("Enter the end number: ");
    scanf("%d", &end);

    if (start >= end) 
    {
        printf("Invalid range! Start should be smaller than end.\n");
    } 
    else 
    {
        i = start + 1;
        
        while (i < end) 
        {
            if (i % 2 == 0) 
            { 
                sum += i;
            }
            i++; 
        }
        
        printf("Sum of even numbers between %d and %d (exclusive) is: %d\n", start, end, sum);
    }

    return 0;
}
