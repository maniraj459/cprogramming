#include<stdio.h>

int main()
{
    float P, T, R, SI;

    puts("Enter Principal:");
    scanf("%f",&P);

    puts("Enter Time:");
    scanf("%f",&T);

    puts("Enter Rate:");
    scanf("%f",&R);

    SI = (P*T*R)/100;

    printf("Simple Interest = %f",SI);

    return 0;
}