#include<stdio.h>

int main()
{
    float x,y,result;
    char ch1;

    puts("Enter first number:");
    scanf("%f",&x);

    puts("Enter second number:");
    scanf("%f",&y);

    puts("Enter operator (+,-,*,/):");
    scanf(" %c",&ch1);

    if(ch1=='+')
        result=x+y;

    else if(ch1=='-')
        result=x-y;

    else if(ch1=='*')
        result=x*y;

    else if(ch1=='/')
        result=x/y;

    else
    {
        puts("Invalid input!!");
        return 0;
    }

    printf("Result = %f",result);

    return 0;
}