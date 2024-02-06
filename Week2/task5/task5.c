#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z;
   int max=0;
   printf("Enter first number:");
   scanf("%d",&x);
   printf("Enter second number:");
   scanf("%d",&y);
   printf("Enter third number:");
   scanf("%d",&z);

   if(x>y)
   {
       if(x>z)
       {
           max=x;
       }
       else
       {
           max=z;
       }
   }
   else
   {
       if(y>z)
       {
           max=y;
       }
       else
       {
           max=z;
       }
   }
   printf("Maximum number=%d",max);

    return 0;
}
