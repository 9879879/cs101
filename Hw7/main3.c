#include <stdio.h>

int main() {
    int x = 1;
    int y = 1;
    
    while(x <= 9) {
        printf("%d*%d=%d\t", x, y, x*y);
        if(y < 9) {
            y++;
        } else {
            y = 1;
            x++;
            printf("\n");
        }
    }
    return 0;
}
