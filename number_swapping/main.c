#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,y,z;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);
    z=x;
    x=y;
    y=z;

printf("The swapped numbers are %d and %d",x,z);

}
