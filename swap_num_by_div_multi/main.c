
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x,y;
    printf("Enter any two numbers to swap\n ");
    scanf("%d%d",&x,&y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("The swapped numbers are %d,%d ",x,y);

}


