#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int count=0;
    int rem;
    printf("Enter Number:");
    scanf("%d",&x);
     int num=x;

    while(x!=0)
    {
        rem=x%10;
        count++;
        x/=10;
    }
    printf("Number of digits in %d=%d",num,count);
    return 0;
}
