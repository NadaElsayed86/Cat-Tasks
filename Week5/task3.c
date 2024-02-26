#include <stdio.h>
#include <stdlib.h>
int mul(int *a,int *b,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
        sum+=a[i]*b[i];
    return sum;
}
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,4};
    int size=sizeof(a)/sizeof(a[0]);
    printf("%d ",mul(a,b,size));
    return 0;
}
