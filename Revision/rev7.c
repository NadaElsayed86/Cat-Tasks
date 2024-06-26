#include <stdio.h>
#include <stdlib.h>


int main(void) {
  char str[100],str2[100];
    printf("Enter String:");
    gets(str);

    int n=strlen(str);

    for(int i=0;i<n;i++) {
        str2[i]=str[i];
    }

    printf("String 2:");
    for(int i=0;i<n;i++) {
        printf("%c",str2[i]);
    }


        return 0;

}
