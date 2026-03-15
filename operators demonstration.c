#include<stdio.h>

int main()
{
    int a=10,b=5;

    printf("Arithmetic Operators\n");
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b);
    printf("a/b = %d\n",a/b);
    printf("a%%b = %d\n",a%b);

    printf("\nRelational Operators\n");
    printf("a>b = %d\n",a>b);
    printf("a<b = %d\n",a<b);
    printf("a==b = %d\n",a==b);

    printf("\nLogical Operators\n");
    printf("(a>b && b>0) = %d\n",(a>b && b>0));
    printf("(a>b || b>10) = %d\n",(a>b || b>10));

    printf("\nAssignment Operator\n");
    int result;
    result = a + b;
    printf("result = %d\n",result);

    printf("\nIncrement / Decrement\n");
    printf("a++ = %d\n",a++);
    printf("b-- = %d\n",b--);

    printf("\nBitwise Operator\n");
    printf("a & b = %d\n",(a & b));

    return 0;
}