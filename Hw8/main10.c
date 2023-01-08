#include<stdio.h>
int main()
{
    int n=156156;
    int sum=0;
       
        while(n!=0){
        sum=sum*10+n%10;
        n/=10;
    }
    printf("正整數倒轉:%d\n",sum);
    return 0;
}
