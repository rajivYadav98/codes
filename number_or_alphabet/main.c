#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ca;
    printf("enter any character ");
    scanf("%c",&ca);
    if (ca >= 97 && ca <= 122||ca >= 65 && ca <= 97)
    {
    printf ("%c is a alphabet",ca);
    }
    else if  (ca >= 48 && ca <= 57)
    {
      printf("%c is a number",ca);
    }
    else
    {
        printf(" you have entered a special character ");
    }

    return 0;
}
