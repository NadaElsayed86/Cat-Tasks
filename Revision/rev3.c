#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float x,y,sum=0,mul=1,sub=0,div=1;
      printf("Enter an operator (+,-,*,/):");
    scanf("%c",&op);

    printf("Enter two operands:");
    scanf("%f %f",&x,&y);

    switch(op) {
        case '+': {
            sum=x+y;
            printf("%.2f+%.2f=%.2f",x,y,sum);
            break;
        }
        case '-': {
            sub=x-y;
            printf("%.2f-%.2f=%.2f",x,y,sub);
            break;
        }
        case '*': {
            mul=x*y;
            printf("%.2f*%.2f=%.2f",x,y,mul);
            break;
        }
        case '/': {
            div=x/y;
            printf("%.2f/%.2f=%.2f",x,y,div);
            break;
        }
    }
    return 0;
}
