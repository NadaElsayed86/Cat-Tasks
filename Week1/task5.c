#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Enter First Number:");
    scanf("%d",&x);
    printf("Enter Second Number:");
    scanf("%d",&y);
    printf("Enter Third Number:");
    scanf("%d",&z);

    printf("Numbers in reverse order are:%d\t%d\t%d",z,y,x);
    return 0;
}
