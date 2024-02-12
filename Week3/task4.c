#include <stdio.h>
#include <stdlib.h>
int user,pass;
int Login(int user,int pass);
int main()
{
  Login(user,pass);
    return 0;
}
int Login(int user,int pass)
{
    printf("Enter Your UserName:");
    while(1)
    {
        scanf("%d",&user);
        if(user==10002426)
        {
            printf("True..\n");
    printf("Enter Your PassWord:");
      for(int i=1;i<=3;i++)
    {
        scanf("%d",&pass);
        if(pass==5678123)
        {
            printf("Successful Login");
            return 1;
        }
        else if(i<3)
        {
            printf("Wrong PassWord...please try again\n");
        }
        else
        {
            printf("Failed!");
            return 0;
        }
    }
        }
        else
        {
            printf("Wrong UserName...try again\n");
        }
    }
}


