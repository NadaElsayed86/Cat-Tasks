#include <stdio.h>
#include <stdlib.h>

int MAX(int a,int b) {
    if(a>b) {
        return a;
    }
    else {
        return b;
    }
}

int MIN(int a,int b) {
    if(a<b) {
        return a;
    }
    else {
        return b;
    }
}
int main(void) {
   int a,b,c,d,max=0,min=0;
    printf("Enter 4 numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    max=MAX(MAX(a,b),MAX(c,d));
    printf("Maximum number is =%d\n",max);

    min=MIN(MIN(a,b),MIN(c,d));
    printf("Minimum number is =%d",min);



        return 0;

}
