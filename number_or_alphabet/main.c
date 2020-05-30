#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ca;
    printf("enter any character ");
    scanf("%c",&ca);
    if (ca >= 'a' && ca <= 'z'||ca >= 'A' && ca <= 'Z')
    {
    printf ("%c is a alphabet",ca);
    }
    else if  (ca >= '0' && ca <= '9')
    {
      printf("%c is a number",ca);
    }
    else
    {
        printf(" you have entered aspecial character ");
    }

    return 0;
}
