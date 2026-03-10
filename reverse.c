#include<stdio.h>
int main(){
  int n,reverse=0,digit;
  printf("Enter a 5-digit number:");
  scanf("%d",&n);
  while(n>0){
digit=n%10;
reverse=reverse*10+digit;
n=n/10;
  }
  printf("The reversed number is:%d",reverse);
  return 0;
}