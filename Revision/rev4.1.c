#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x,rem=0,sum=0;
   printf("Enter any number to find sum of its digits:");
    scanf("%d",&x);

    while(x!=0) {
        rem=x%10;
        sum+=rem;
        x/=10;
    }
    printf("sum of digits =%d",sum);
    return 0;
}
