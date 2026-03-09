#include<stdio.h>
int main(){
  int num;
  int hundreds,tens,ones;
 printf("Ente a Three Digit number: ");
  scanf("%d",&num);
  if(num>=100  && num <=999 ){
    hundreds=num/100;
    ones=(num/10)%10;
    tens=num%10;
printf("Hundred place:%d\n",hundreds);
printf("Tens place:%d\n",tens);
printf("Ones place:%d\n",ones);
  }
  else
  {
  printf("Invalid Number! Please Enter the correcr number!!");
  }
  return 0;
}