#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,sum;
    int i;
   printf("Please Enter 10 numbers:");
   for(i=1;i<=10;i++)
   {
       scanf("%f",&x);
       sum+=x;
   }
   printf("Sum of numbers=%.2f\n",sum);
    printf("Average of numbers=%.2f",sum/10);

    return 0;
}
