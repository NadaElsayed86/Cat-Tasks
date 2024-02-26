#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=3,y=4,z=5;
    int *px=&x,*py=&y,*pz=&z;

    printf("%d %d %d\n",x,y,z);
    printf("%p %p %p\n",px,py,pz);
    printf("%d %d %d\n",*px,*py,*pz);

    printf("Swapping Pointers:\n");
    pz=px;
    px=py;
    py=pz;

    printf("%d %d %d\n",x,y,z);
    printf("%p %p %p\n",px,py,pz);
    printf("%d %d %d\n",*px,*py,*pz);

    return 0;
}
