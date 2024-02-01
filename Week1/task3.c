#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
  printf("Please Enter amount of Dollars:");
  scanf("%f",&x);
  printf("Amount With Tax=%f",x+(x*5/100));

    return 0;
}
