
#include <stdio.h>

int main()
{
    char ch;
     printf("Enter any character ");
     scanf("%c",&ch);
     switch(ch)

{
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            printf("Entered character is vowel ");
            break;
            case 'u':
            printf("Entered character is vowel ");
            break;
            default:
                printf("Entered character is consonant ");
}
return 0;
}
