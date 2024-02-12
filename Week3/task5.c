#include <stdio.h>
#include <stdlib.h>
int fib(int x);
int main()
{
    int x;
    printf("Enter Number:");
    scanf("%d",&x);

    printf("Fibonacci of %d=%d",x,fib(x));
    return 0;
}

int fib(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fib(x-1)+fib(x-2);

}

