#include<stdio.h>

int main()
{
    int A,B,Temp;

    puts("Enter value of A:");
    scanf("%d",&A);

    puts("Enter value of B:");
    scanf("%d",&B);

    Temp = A;
    A = B;
    B = Temp;

    printf("After swapping:\n");
    printf("A = %d\n",A);
    printf("B = %d",B);

    return 0;
}