#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b,c=0 ,i=0;

    printf("Enter the range you want to add \n ");
    scanf("%d %d",&a,&b);
    for (i=a;i<=b;i++)
    {
        c=c+i;
    }
     printf("The Addition of the range is %d",c);
    return 0;
}
