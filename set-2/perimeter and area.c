#include<stdio.h>

int main()
{
    float L,B,Area,Perimeter;

    puts("Enter Length:");
    scanf("%f",&L);

    puts("Enter Breadth:");
    scanf("%f",&B);

    Area = L * B;
    Perimeter = 2 * (L + B);

    printf("Area = %f\n",Area);
    printf("Perimeter = %f",Perimeter);

    return 0;
}