#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    int pass;
   printf("Please Enter Your ID:");
   scanf("%d",&id);

   if(id==1234)
   {
       for(int i=1;i<=3;i++)
       {
       printf("Enter Your Password:");
       scanf("%d",&pass);
       if(pass==2468)
       {
           printf("Welcome");
           break;
       }
       else
       {
           printf("You are not registered\n");
       }

       }
       if(pass!=2468)
       {
           printf("no more tries");
       }
   }
   else
   {
       printf("Wrong ID");
   }
    return 0;
}
