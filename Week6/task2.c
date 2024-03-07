#include <stdio.h>
#include <stdlib.h>

int main()
{
    int countalpha=0,countdig=0,countsp=0;
    char str[100];
    printf("Enter string:");
    gets(str);

    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            countalpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            countdig++;
        }
        else
        {
            countsp++;
        }
        i++;
    }
     printf("Number of alphabets=%d\n",countalpha);
     printf("Number of digits=%d\n",countdig);
     printf("Number of special characters=%d\n",countsp);
    return 0;
}
