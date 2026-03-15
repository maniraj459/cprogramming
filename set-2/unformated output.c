#include<stdio.h>

int main()
{
    char name[50], address[100];
    char age[10], weight[10], height[10];

    puts("Enter your name:");
    gets(name);

    puts("Enter your address:");
    gets(address);

    puts("Enter your age:");
    gets(age);

    puts("Enter your weight:");
    gets(weight);

    puts("Enter your height:");
    gets(height);

    puts("\n--- Personal Information ---");
    printf("name:");
    puts(name);
    printf("address:");
    puts(address);
    printf("Age:");
    puts(age);
    puts(weight);
    printf("Heitht:");
    puts(height);

    return 0;
}