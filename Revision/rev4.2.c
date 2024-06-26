#include <stdio.h>
#include <stdlib.h>

int main()
{
      int x,pow,res=1;
   printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the power:");
    scanf("%d",&pow);

    for(int i=0;i<pow;i++) {
       res*=x;
    }
    printf("Answer =%d",res);
    return 0;
}
