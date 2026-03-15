#include <stdio.h>

int main() {
    int rows = 5;
    
    printf("\nPattern 3: Number Triangle with Separator\n");
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("________\n");
    return 0;
}