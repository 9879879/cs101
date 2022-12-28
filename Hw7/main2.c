/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double n = 0.0f;
    double i = 0.0f;

    for(int k=1; k<=318000; k++){
        i = n;
        n = 4*pow(-1,k+1)/(2*k-1);
        n = n+i;
        //最小318000
    }
    printf("%f\n",n);
    
    return 0;
}
