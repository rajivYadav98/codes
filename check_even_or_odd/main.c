#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
char a;
char answer;
do{
printf("Enter any number to check\n");
scanf("%c",&a);

if( isdigit(a) )
{
 if(a%2==0)
    {
    printf("the entered character is %d \n ",a);
    printf("The entered number is even");
    }
    else if (a%2!=0)
    {
    printf("the entered character is %d \n ",a);
    printf("The entered number is odd");
    }
}
else
    {
        printf("invalid input" );
    }
    printf("\n press y to repeat & any key to exit" );
    scanf("%c",&answer);
}
while(answer=='y'||answer=='Y');
return 0;
}
