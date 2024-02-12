#include <stdio.h>
#include <stdlib.h>
int Get_Max(int x,int y);
int main()
{
    int x,y;
    printf("Enter First Number:");
    scanf("%d",&x);
     printf("Enter Second Number:");
    scanf("%d",&y);

    printf("Maximum Number=%d",Get_Max(x,y));
    return 0;
}

int Get_Max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
