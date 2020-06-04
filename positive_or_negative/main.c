#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter any number to check positive or negative\n");
    scanf("%d",&a);
    if (a > 0)
    {
    printf("The entered number is positive");
    }
    else if (a < 0)
    {
         printf("The entered number is negative");
    }
    else
    printf("The entered input is wrong");
            return 0;

}
