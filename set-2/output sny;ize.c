/*26. Print the value of y for given x=2 & z=4 and analyze the output.
a. y = x++ + ++x;
b. y= ++x + ++x;
c. y= ++x + ++x + ++x;
d. y = x>z; e. y= x>z? x:z;
e. y = x & z;
f. y= x>>2 + z<<1;*/
#include<stdio.h>

int main()
{
    int x,z,y;

    x=2;
    z=4;

    y = x++ + ++x;
    printf("a) y = %d\n",y);

    x=2;
    y = ++x + ++x;
    printf("b) y = %d\n",y);

    x=2;
    y = ++x + ++x + ++x;
    printf("c) y = %d\n",y);

    x=2;
    y = x > z;
    printf("d) y = %d\n",y);

    x=2;
    y = x > z ? x : z;
    printf("e) y = %d\n",y);

    x=2;
    y = x & z;
    printf("f) y = %d\n",y);

    x=2;
    y = x >> 2 + z << 1;
    printf("g) y = %d\n",y);

    return 0;
}