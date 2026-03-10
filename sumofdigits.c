#include<stdio.h>
int main(){
  int n,d1,d2,d3,d4,sum;
  printf("Enter a four digit number:");
  scanf("%d",&n);
  d1=n/1000;
  d2=(n%1000)/100;
  d3=(n%100)/10;
  d4=n%10;
  sum=d1+d2+d3+d4;
  printf("The sum of the digits are:%d",sum);
  return 0;

}