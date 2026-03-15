#include<stdio.h>

void main () {
char name[] = "Storage Classes";
int i;
for(i=0; name[i] != '\0'; i++) {
if( i % 3 == 1) {
printf("%c", name[i]);
}
}
getch();
}