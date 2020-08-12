#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int number;
   long int  count=0;
    printf("Enter two integers: ");
    scanf("%ld",&number);
      while (number!=0)
      {
         number=number/10;
      count=count+1;
      }
 printf("%ld ",count);
    return 0;
}
