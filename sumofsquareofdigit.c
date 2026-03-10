#include<stdio.h>
int main(){
  int n,digit,sum=0;
  printf("Enter a 5-digit number:");
  scanf("%d",&n);
  while(n>0){
    digit=n%10;
    sum=sum+digit*digit;
    n=n/10;

  }
  printf("The sum of square of digit is:%d",sum);
  return 0;
}