#include <stdio.h>

int main(){
    int i = 10;
    
    if (i == 0) {
        printf("\t zero \n" );
    } else if (i % 2 == 0) {
        printf("\t even \n" );
    } else {
        printf("\t odd \n" );
    }
    return 0;
}
