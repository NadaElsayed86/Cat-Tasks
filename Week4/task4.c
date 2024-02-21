#include <stdio.h>
#include <stdlib.h>
int repeat(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
               printf("%d\n",arr[i]);
            }
        }
    }
}
int main()
{
    int size,i
    ;
    printf("Enter Length of Array:");
    scanf("%d",&size);
    int arr[size];

     printf("Enter Elements of Array:");
     for(i=0;i<size;i++)
     {
         scanf("%d",&arr[i]);
     }

     printf("Repeating Elements are:\n");
      repeat(arr,size);

    return 0;
}
