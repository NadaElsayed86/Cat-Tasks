#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
   printf("Please Enter Your Working Hours:");
   scanf("%d",&x);
   int salary;
   salary=x*50;

   if(x>=40)
   {
       printf("Your Salary=%d",salary);
   }
   else
   {
       salary=.9*salary;
       printf("There is 10%% deduction from your salary\n");
       printf("Your Salary=%d",salary);
   }
    return 0;
}
