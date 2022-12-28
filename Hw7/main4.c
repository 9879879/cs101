/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <stdio.h>


int main(){
    int i = 12345;
    int i1 = i/1%10;
    int i2 = i/10%10;
    int i3 = i/100%10;
    int i4 = i/1000%10;
    int i5 = i/10000%10;
    int iArry[4];
        iArry[0] = i5;
        iArry[1] = i4;
        iArry[2] = i3;
        iArry[3] = i2;
        iArry[4] = i1;
    int n;

    n = iArry[4];
    iArry[4]=iArry[1];
    iArry[1]=n;
    
    for(int i = 0; i < 5; i++){
        printf("%d",iArry[i]);
    }
    
    return 0;
}
