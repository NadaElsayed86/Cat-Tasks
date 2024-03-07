#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100],c;
    printf("Enter string:");
    gets(str);
    printf("original string:%s\n",str);
    int x=strlen(str);

    for(int i=0;i<x;i++)
    {
    for(int j=i+1
        ;j<=x-1;j++)
    {
        c=str[i];
        str[i]=str[j];
        str[j]=c;
    }
    }
    printf("Reversed string:%s",str);
    return 0;
}
