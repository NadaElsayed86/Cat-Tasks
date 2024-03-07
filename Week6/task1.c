#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter String in Lowercase:");
    gets(str);

    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("String in Uppercase:%s",str);

    return 0;
}
