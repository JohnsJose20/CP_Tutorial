/*Authore: Johns Jose
1.Write a C Program to check Whether a Character is Vowel or Consonant. */

#include <stdio.h>
int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
        printf("%c is a Vowel.\n", ch);
    } 
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        printf("%c is a Consonant.\n", ch);
    } 
    else 
    {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
