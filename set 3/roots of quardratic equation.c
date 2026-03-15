#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, d, root1, root2, real, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different\n");
        printf("Root1 = %f\nRoot2 = %f", root1, root2);
    }
    else if(d == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %f", root1);
    }
    else
    {
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("Roots are complex\n");
        printf("Root1 = %f + %fi\n", real, imag);
        printf("Root2 = %f - %fi", real, imag);
    }

    return 0;
}