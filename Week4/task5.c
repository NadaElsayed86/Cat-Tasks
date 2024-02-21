#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr[5][5];

    for(i=0;i<5;i++)
    {
        printf("Enter row %d:",i+1);
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    int sumr=0,sumc=0;
    printf("Sum of total Rows=");
     for(i=0;i<5;i++)
    {
        sumr=0;
        for(j=0;j<5;j++)
        {
            sumr+=arr[i][j];
        }
        printf("%d ",sumr);
    }

    printf("\nSum of total columns=");
     for(i=0;i<5;i++)
    {
        sumc=0;
        for(j=0;j<5;j++)
        {
            sumc+=arr[j][i];
        }
         printf("%d ",sumc);
    }
    return 0;
}
