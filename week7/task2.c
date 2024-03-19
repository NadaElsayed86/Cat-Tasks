#include <stdio.h>
#include <stdlib.h>
typedef struct students
{
    int id;
    float programming_grade;
    float data_grade;
    float discrete_grade;
    float algorithm_grade;
}std;

int main()
{
    int idd;
   std std[10];
   for(int i=0;i<10;i++)
   {
       std[i].id=1000240+i;
       std[i].programming_grade=80+i;
       std[i].data_grade=70+i;
       std[i].discrete_grade=65+i;
       std[i].algorithm_grade=75+i;
   }

   int cnt=0;
   label:
   printf("Enter ID:\n");
   scanf("%d",&idd);
   for(int i=0;i<10;i++)
   {
       cnt++;
   if(idd==std[i].id)
   {
       printf("Programming Grade:%f\n",std[i].programming_grade);
       printf("Data_Structure Grade:%f\n",std[i].data_grade);
       printf("Discrete_Maths Grade:%f\n",std[i].discrete_grade);
       printf("Algorithms Grade:%f\n",std[i].algorithm_grade);
       break;
   }
   if(cnt==10)
   {
        printf("Wrong ID..Try Again\n");
        goto label;
   }
   }
    return 0;
}
