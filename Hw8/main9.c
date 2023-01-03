#include <stdio.h>
int main(){
    int i, j;
    printf("i=%d\n", j);//j=1
    for(i=0; i<100,j!=3; i++, j++){
        printf("i=%d\n", i);
    }
    return 0;
}
/*會，因為j預設是1，且不能等於3到了第三次迴圈就會達成條件直接跳出來。
 i=0,j=1
 i=1,j=2;
 i=2,j=3; !!
 */
