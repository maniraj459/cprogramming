#include <stdio.h>

int main() {
    int square, cube;
    
    printf("Square of Odd Numbers and Cube of Even Numbers (1-20)\n");
    printf("=====================================================\n\n");
    
    for(int i = 1; i <= 20; i++) {
        if(i % 2 != 0) {  
            square = i * i;
            printf("Number: %2d - Odd  - Square = %d\n", i, square);
        } else { 
            cube = i * i * i;
            printf("Number: %2d - Even - Cube   = %d\n", i, cube);
        }
    }
    
    return 0;
}