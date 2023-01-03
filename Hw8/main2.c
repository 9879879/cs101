#include <stdio.h>

int main()
{
    int i=15;
    int k=0;
    for(int x=1;x<=i;){
        if(i==1){
            k++;
            break;
        }else if(i%2==1){
            k++;
            i=i/2;
        }else {
            i=i/2;
        }
    }
    printf("%d個1",k);
    return 0;
}
