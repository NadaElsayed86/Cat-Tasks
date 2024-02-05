#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Enter your Grade Percentage:");
    scanf("%f",&x);

    if(x>=85)
          printf("Excellent");
    else if(x>=70 && x<85)
            printf("Very good");
    else if(x>=55 && x<70)
            printf("good");
    else
            printf("weak");

    return 0;
}
