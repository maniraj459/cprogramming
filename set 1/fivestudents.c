#include<stdio.h>
int main(){
  char n1[20],n2[20],n3[20],n4[20],n5[20];
  printf("Enter the name of five students:");
  scanf("%s%s%s%s%s",n1,n2,n3,n4,n5);
  printf("The name of five students:");
  printf("\n1.%s",n1);
  printf("\n2.%s",n2);
  printf("\n3.%s",n3);
  printf("\n4.%s",n4);
  printf("\n5.%s",n5);
  return 0;
}