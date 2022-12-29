#include <stdio.h>

void print_spaces(int r, int rows){
    for(int spc=1;spc<=rows-r;spc++){
        printf(" ");
       } 
}
void print_stars(int j){
    for(j=1;j<=2*rows-1;j++){
        printf("* ");
        
        }
    printf("\n");
}

int main(){
    int rows =5;
    int i;
    for(i=rows;i>=1;i--){
        print_spaces(i,rows);
        printf("\n");
    }
    
    
    return 0;
}
