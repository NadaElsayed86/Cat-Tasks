#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Enter First Number:");
    scanf("%d",&x);
    printf("Enter Second Number:");
    scanf("%d",&y);
//arithmetic operators
      printf("x+y=%d\n",x+y);
      printf("x-y=%d\n",x-y);
      printf("x*y=%d\n",x*y);
      printf("x/y=%d\n",x/y);
      printf("x%%y=%d\n",x%y);
//logical operators
      printf("x&&y=%d\n",x&&y);
      printf("x||y=%d\n",x||y);
      printf("!x=%d\n",!x);
//bitwise operators
      printf("x&y=%d\n",x&y);
      printf("x|y=%d\n",x|y);
      printf("x^y=%d\n",x^y);
      printf("~x=%d\n",~x);
      printf("x>>1=%d\n",x>>1);
      printf("x<<2=%d\n",x<<2);

        return 0;
}
