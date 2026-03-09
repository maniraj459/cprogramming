#include<stdio.h>
int main(){
  int radius;
  float area;
  printf("Enter the radius:");
  scanf("%d",&radius);
  area=3.14*radius*radius;
  printf("Area of circle is:%f",area);
  return 0;
}