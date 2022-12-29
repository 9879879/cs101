#include <stdio.h>

void print_spaces(int r, int rows){
    for(int spc=1;spc<=rows-r;spc++){
        printf(" ");
       } 
}
void print_stars(int j){
    for(int str=1;str<=j*2-1;str++){
        printf("*");
        
        }
    
}

int main(){
    int rows =5;
    int i;
    for(i=rows;i>=1;i--){
        print_spaces(i,rows);
        print_stars(i);
        printf("\n");
    }
    
    
    return 0;
}
