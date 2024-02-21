#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,size;
     int max1,max2;
     max1=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

     for(i=0;i<size;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
    }
    printf("Second Maximum in array=%d",max2);
    return 0;
}
