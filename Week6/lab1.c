#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,n2;
   printf("Enter number of subjects:");
   scanf("%d",&n);
   int *ptr=(int *)calloc(n,sizeof(n));
   if(ptr==NULL)
   {
       printf("Memory isnot free");
       exit(1);
   }
   printf("Enter Degrees:");
   for(int i=1;i<=n;i++)
   {
       scanf("%d",(ptr+i));
   }

   for(int i=1;i<=n;i++)
   {
       printf("Degree of %d=%d\n",i,*(ptr+i));
   }

   printf("Do you want to add more subjects?\n");
   scanf("%d",&x);
   printf("Enter 1 for yes and 0 for no:");
   if(1)
   {
       printf("Enter number of subjects you want to add:");
       scanf("%d",&n2);
      ptr=(int *)realloc(ptr,n*sizeof(int));
      if(ptr==NULL)
      {
       printf("Memory isnot free");
       exit(1);
      }
      printf("Enter Degrees:");
     for(int i=n+1;i<=n+n2;i++)
   {
       scanf("%d",(ptr+i));
   }

     for(int i=n+1;i<=n+n2;i++)
   {
       printf("Degree of %d=%d\n",i,*(ptr+i));
   }
   }
   else
   {
       free(ptr);
   }
    return 0;
}
