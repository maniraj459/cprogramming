#include<stdio.h>

int main()
{
    int d1,m1,y1;
    int d2,m2,y2;
    int years,months,days,totalDays;

    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d",&d1,&m1,&y1);

    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d",&d2,&m2,&y2);

    years = y2 - y1;
    months = m2 - m1;
    days = d2 - d1;

    totalDays = years*365 + months*30 + days;

    printf("Total days lived = %d", totalDays);

    return 0;
}