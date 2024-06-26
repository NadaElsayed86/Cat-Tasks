#include <stdio.h>
#include <stdlib.h>


void MAX(int *ptr,int size,int *max) {
        *max=ptr[0];
        for(int i=1;i<size;i++) {
                if(*max<ptr[i]) {
                        *max=ptr[i];
                }
        }
       printf("Maximum Element in array:%d\n",*max);
}
void MIN(int *ptr,int size,int *min) {
        *min=ptr[0];
        for(int i=1;i<size;i++) {
                if(*min>ptr[i]) {
                        *min=ptr[i];
                }
        }
        printf("Minimum Element in array:%d",*min);
}
int main(void) {
        int n,min=0,max=0;
        printf("Enter size of array:");
        scanf("%d",&n);

        int ptr[n];
        printf("Enter %d Elements in array:",n);
        for(int i=0;i<n;i++) {
                scanf("%d",&ptr[i]);
        }


       MAX(ptr,n,&max);
        MIN(ptr,n,&min);

        return 0;

}
