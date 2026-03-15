#include <stdio.h>

int main() {
    int rows = 5;
    
    printf("Pattern Increasing Number Triangle\n");
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}