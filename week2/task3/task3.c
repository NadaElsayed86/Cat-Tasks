#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    printf("Please Enter your ID:");
    scanf("%d",&id);

    switch(id)
    {
     case 1234:
        printf("Your name is Harry");
        break;
     case 5678:
        printf("Your name is Ron");
        break;
     case 1145:
        printf("Your name is Hermione");
        break;
     default:
            printf("Wrong ID");
    }

    return 0;
}
