#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,r,s,sums=0;

    printf("Enter the numbers ");
    scanf("%d", &number);
    while (number>0)
    {
    s=number%10;
   number=number/10;
   sums = sums+s;
    }
    printf("The Addition of number is %d ", sums);
    return 0;
}
