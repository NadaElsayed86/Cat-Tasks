#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,j,count;
   printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("Unique Elements of Array are:\n");
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d",arr[i]);
        }
    }
    return 0;
}
