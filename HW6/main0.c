#include <stdio.h>

int main(){
    int i = 10;
    
    if (( i & (i - 1))==0) {
        printf("\t %d is true\n" , i);
    } else {
        printf("\t %d is false \n ", i);
    }
    return 0;
}
