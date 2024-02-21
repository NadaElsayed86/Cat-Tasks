#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,j,x,z;
    printf("Enter Length of Array:");
    scanf("%d",&size);
    int arr[size];

     printf("Enter Elements of Array:");
     for(i=0;i<size;i++)
     {
         scanf("%d",&arr[i]);
     }
      printf("Elements of Array are:\n");
     for(i=0;i<size;i++)
     {
         printf("%d \n",arr[i]);
     }

     printf("Choose Ascending Or Descending of Array:\n");
     printf("Enter 0 for Ascending Or 1 for Descending:");
     scanf("%d",&x);

    switch(x)
    {
    case 0:
        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
               if(arr[i]>arr[j])
               {
                   z=arr[i];
                   arr[i]=arr[j];
                   arr[j]=z;
               }
            }
        }
         printf("Elements Of array at Ascending Order:\n");
         for(i=0;i<size;i++)
        {
                printf("%d \n",arr[i]);
        }
        break;
    case 1:
         for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
               if(arr[i]<arr[j])
               {
                   z=arr[i];
                   arr[i]=arr[j];
                   arr[j]=z;
               }
            }
        }
        printf("Elements Of array at Descending Order:\n");
         for(i=0;i<size;i++)
        {
                printf("%d \n",arr[i]);
        }
        break;


    }
    return 0;
}
