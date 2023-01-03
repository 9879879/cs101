#include <stdio.h>
#include <math.h>

int main()
{
    int i=6;
    int k=0;
    int y=0;
    while(i>0){
        if(i==1){
            y=y+pow(10,k);
            break;
        }else if(i%2==1){
            y=y+pow(10,k);
            k++;
            i=i/2;
        }else{
            k++;
            i=i/2;
        }
    }
    printf("%08d",y);
    return 0;
}
