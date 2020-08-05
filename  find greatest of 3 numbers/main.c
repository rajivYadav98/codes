#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c;
 printf("Enter three numbers ");
 scanf("%d%d%d",&a,&b,&c);
 if (a>b && a>c)
    {
    printf("%d greater",a);
    }
    if (b>a && b>c)
    {
    printf("%d greater",b);

    }
    if (c>a && c>b)
    {
    printf("%d greater",c);
 }
return 0;
}
