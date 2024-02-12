#include <stdio.h>
#include <stdlib.h>
int x=5;
int y=7;
void swap(int x,int y);
int main()
{
     swap(x,y);
    return 0;
}
void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;

    printf("Value of x=%d\n",x);
    printf("Value of y=%d",y);

}
