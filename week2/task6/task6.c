#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res;
    printf("Please Enter the result of 3*4=");
    scanf("%d",&res);

    if(res==3*4)
        printf("Thanks");
    else
        printf("Try again");

    return 0;
}
