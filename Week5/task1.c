#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    printf("Number before change=%d\n",x);
    int *p=&x;
    *p=20;
    printf("Number after change=%d",*p);
    return 0;
}
