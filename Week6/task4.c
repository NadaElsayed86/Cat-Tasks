#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter string:\n");
    gets(str);
    int x=strlen(str);
    char c;
    printf("Enter character to search:\n");
    scanf("%c",&c);
    for(int i=0;i<x;i++)
    {
        if(str[i]==c)
        {
            printf("%c is found at index %d",c,i);
            break;
        }
    }
    return 0;
}
