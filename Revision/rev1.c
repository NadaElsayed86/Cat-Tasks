#include <stdio.h>
#include <stdlib.h>



int main(void) {
      int num,cnt=0;
      printf("Enter any number:");
    scanf("%d",&num);

    while(num!=0) {
        if(num&1) {
            cnt++;
        }
        num=num>>1;
    }

    printf("Total one bit is:%d\n",cnt);
    printf("Total zero bit is:%d",(32-cnt));

        return 0;

}
