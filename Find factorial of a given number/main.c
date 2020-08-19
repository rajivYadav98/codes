#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2=1,i ;
    printf("Enter the number to find factor\n");
    scanf("%d", &num1);
   for ( i=num1; i>=1; i--)
    {
        num2=num2*i;
    }
   printf("Factors of numbers are given below %d",num2);
    return 0;
}
