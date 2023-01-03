#include<stdio.h>

int main()

{
    double num1,num2;
    
    num1=9.456;
    
    num1=(int)(num1+0.5);
    
    num2=num1; 
    
    printf("%8f",num2);
    
    return 0;
}
