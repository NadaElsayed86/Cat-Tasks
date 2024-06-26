#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int sz,cnteven=0,cntodd=0;
    printf("Enter size of the array:");
    scanf("%d",&sz);
    int arr[sz];

    printf("Enter %d Elements in array:",sz);
    for(int i=0;i<sz;i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<sz;i++) {
       if(arr[i]%2==0) {
           cnteven++;
       }
        else {
            cntodd++;
        }
    }
    printf("Total Even Elements:%d\n",cnteven);
    printf("Total Odd Elements:%d",cntodd);





        return 0;

}
