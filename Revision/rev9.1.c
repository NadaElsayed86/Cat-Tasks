#include <stdio.h>
#include <stdlib.h>



int main(void) {
        int bin;
    printf("Enter Binary number:");
    scanf("%d",&bin);

    int rem=0,weight=1,dec=0;
    int num=bin;
    while(bin!=0) {
        rem=bin%10;
        dec+=rem*weight;
        weight*=2;
        bin/=10;
    }

    printf("%d in binary=%d in decimal",num,dec);
        return 0;

}
