#include <stdio.h>
#include <stdlib.h>
int sum(int *p,int *n)
{
    return (*p+*n);
}
int main()
{
    int x,y;
    printf("Enter Two Numbers:");
    scanf("%d %d",&x,&y);
    printf("Sum of two numbers=%d",sum(&x,&y));
    return 0;
}
