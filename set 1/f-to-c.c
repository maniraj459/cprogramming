#include<stdio.h>
int main(){
  float c,f;
  printf("Enter the Temperature in Fehrenheit:");
  scanf("%f",&f);
  c=((f-32)*5/9.0);
  printf("The Temperature in Celcius is:%f",c);
  return 0;
}