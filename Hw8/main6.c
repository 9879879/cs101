#include <stdio.h>
int main() {
    int rows = 7;
    int i, space, k = 0;

    for (i=1; i<= rows; ++i, k=0) {
       for (space = 1; space <= rows - i; ++space)
          printf("  ");
       for(int k=0; k!=2*i-1; k++)
          printf("* ");
       printf("\n");
    }
    for(int i=0; i<rows; i++){
        for(int i=1; i<=rows*2-1; i++)
            (i==1||i==rows*2-1)?printf("* "):printf("  ");
        printf("\n");
    }
    for(int i=1; i<=rows*2-1; i++)
        printf("* ");
    return 0;
}
