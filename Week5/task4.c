#include <stdio.h>
#include <stdlib.h>
#define size 5
int sort(int *a)
{
    int x,i,j;
   for(i=0;i<size;i++)
   {
       for(j=i+1;j<size;j++)
       {
           if(a[i]>a[j])
           {
               x=a[i];
               a[i]=a[j];
               a[j]=x;
           }
       }
       printf("%d ",a[i]);
   }
}
int main()
{
    int a[size];
    int *p=a;
    printf("Enter elements of array:");
    for(p=a;p<=a+size-1;p++)
    {
       scanf("%d",p);
    }
     printf("Elements of array:\n");
     for(p=a;p<=a+size-1;p++)
    {
        printf("%d ",*p);
    }
    printf("\nElements of sorted array:\n");
     sort(a);

    return 0;
}
