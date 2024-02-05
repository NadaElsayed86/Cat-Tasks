#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    int fact=1;
    int num=x;

    while(num!=0)
    {
        fact*=num;
        num--;
    }
    printf("Factorial of %d=%d",x,fact);
    return 0;
}
