#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s,area;

    puts("Enter three sides of triangle:");

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of Triangle = %f",area);

    return 0;
}