#include <stdio.h>

int main(){
    int i = 10;
    
    if (i % 15 == 0) {
        printf("\t Love IU\n" );
    } else if (i % 5 == 0) {
        printf("\t IU\n" );
    } else if (i % 3 == 0) {
        printf("\t Love\n" );
    } else {
        printf("\t %d\n" ,i);
    }
    return 0;
}
