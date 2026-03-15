#include<stdio.h>

int main()
{
    char gender, status;
    float income, tax = 0;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter marital status (M for Married / U for Unmarried): ");
    scanf(" %c", &status);

    printf("Enter annual income: ");
    scanf("%f", &income);

    if(status == 'M' || status == 'm')   // Married
    {
        if(income <= 450000)
        {
            tax = income * 0.01;
        }
        else if(income <= 550000)
        {
            tax = (450000 * 0.01) + (income - 450000) * 0.10;
        }
        else if(income <= 750000)
        {
            tax = (450000 * 0.01) + (100000 * 0.10) + (income - 550000) * 0.20;
        }
        else if(income <= 1300000)
        {
            tax = (450000 * 0.01) + (100000 * 0.10) + (200000 * 0.20) + (income - 750000) * 0.30;
        }
        else
        {
            tax = (450000 * 0.01) + (100000 * 0.10) + (200000 * 0.20) +
                  (550000 * 0.30) + (income - 1300000) * 0.35;
        }
    }
    else if(status == 'U' || status == 'u')   // Unmarried
    {
        if(income <= 400000)
        {
            tax = income * 0.01;
        }
        else if(income <= 500000)
        {
            tax = (400000 * 0.01) + (income - 400000) * 0.10;
        }
        else if(income <= 750000)
        {
            tax = (400000 * 0.01) + (100000 * 0.10) + (income - 500000) * 0.20;
        }
        else if(income <= 1300000)
        {
            tax = (400000 * 0.01) + (100000 * 0.10) + (250000 * 0.20) + (income - 750000) * 0.30;
        }
        else
        {
            tax = (400000 * 0.01) + (100000 * 0.10) + (250000 * 0.20) +
                  (550000 * 0.30) + (income - 1300000) * 0.35;
        }
    }

    // Female tax discount
    if(gender == 'F' || gender == 'f')
    {
        tax = tax - (tax * 0.10);
    }

    printf("Total tax to pay = %.2f\n", tax);

    return 0;
}