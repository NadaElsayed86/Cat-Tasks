#include <stdio.h>
#include <stdlib.h>



int main(void) {
      int num,bit;
      printf("ENter any number:");
    scanf("%d",&num);

    printf("Enter nth bit to check (0-31):");
    scanf("%d",&bit);

    int ptr[40]={0};
   for(int i=0;i<32;i++) {
       if(num&1) {
           ptr[i]=1;
       }
       else {
           ptr[i]=0;
       }
       num=num>>1;
   }

    printf("The %d bit is set to %d",bit,ptr[bit]);

        return 0;

}
