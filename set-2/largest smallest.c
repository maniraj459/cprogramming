#include<stdio.h>

int main()
{
    int a,b,c,largest,smallest;

    puts("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        largest=a;
    else if(b>=a && b>=c)
        largest=b;
    else
        largest=c;

    if(a<=b && a<=c)
        smallest=a;
    else if(b<=a && b<=c)
        smallest=b;
    else
        smallest=c;

    printf("Largest number = %d\n",largest);

    if(largest%2==0)
        printf("Largest is Even\n");
    else
        printf("Largest is Odd\n");

    printf("Smallest number = %d\n",smallest);

    if(smallest%2==0)
        printf("Smallest is Even\n");
    else
        printf("Smallest is Odd\n");

    return 0;
}