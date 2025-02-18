#include <stdio.h>
int main() 
{

int printDigitInWords(int digit) 
{
    switch (digit) 
    {
        case 0: printf("zero "); 
        break;
        case 1: printf("one "); 
        break;
        case 2: printf("two "); 
        break;
        case 3: printf("three "); 
        break;
        case 4: printf("four "); 
        break;
        case 5: printf("five "); 
        break;
        case 6: printf("six "); 
        break;
        case 7: printf("seven "); 
        break;
        case 8: printf("eight "); 
        break;
        case 9: printf("nine "); 
        break;
    }
    return 0;
}

    int num, reversed = 0, temp, digit_count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    
    for (; temp > 0; temp /= 10) 
    {
        reversed = reversed * 10 + (temp % 10);
        digit_count++;
    }
    
    for (int i = 0; i < digit_count; i++) 
    {
        printDigitInWords(reversed % 10);
        reversed /= 10;
    }
    
    printf("\n");
    return 0;
}

