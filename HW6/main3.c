#include <stdio.h>

int main(){
    int year = 2022;
    
    if ((year % 4)== 0 && (year % 100)!= 0 || (year % 400) == 0) {
	printf("\t%d是閏年\n" , year);
	} else {
		printf("\t%d不是閏年\n" , year);
	} 
    return 0;
}
