#include<stdio.h>
int main(){
char full_name[20],address[20],email[20],education[20];
 int age;
 printf("Enter full name:");
 scanf("%[^\n]%*c",full_name);

 printf("Enter your address,email,age and education qualification:");
 scanf("%s%s%d%s",address,email,&age,education);
 printf("\n Full name:%s",full_name);
 printf("\n Address:%s",address);
 printf("\n E-mail:%s",email);
 printf("\n Age:%d",age);
 printf("\n Educational Qualification:%s",education);
 return 0;
}