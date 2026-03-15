#include <stdio.h>

int main()
{
    int a, b, i;
    long int result = 1;

    printf("Enter base number: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    for(i = 1; i <= b; i++)
    {
        result = result * a;
    }

    printf("Result = %ld", result);

    return 0;
}