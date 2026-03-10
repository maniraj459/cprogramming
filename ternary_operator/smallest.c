#include<stdio.h>
int main(){
  int a,b,c,d,min;
  printf("Enter four numbers:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  min=(a<b)?a:b;
  min=(min<c)?min:c;
  min=(min<d)?min:d;
  printf("The smallest numberis:%d",min);
  return 0;
}