#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,sw;
    printf("Enter size of array:");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));

    printf("Enter elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++)
    {
          for(int j=i+1;j<n;j++)
          {
              if(ptr[i]<ptr[j])
              {
                  sw=ptr[i];
                  ptr[i]=ptr[j];
                  ptr[j]=sw;
              }
          }
    }
    printf("Maximum number of array:%d\n",ptr[0]);
     printf("Minimum number of array:%d",ptr[n-1]);

    free(ptr);

    return 0;
}
