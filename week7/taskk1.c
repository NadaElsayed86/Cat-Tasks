#include <stdio.h>
#include <stdlib.h>
struct employees{
    double salary;
    double bouns;
    double deduct;
};
int main()
{
    struct employees Mohsen;
    printf("Please Enter Your Salary:\n");
    scanf("%lf",&Mohsen.salary);
    printf("Enter Your Bouns If You have:\n");
    scanf("%lf",&Mohsen.bouns);
    printf("Enter Deduction If there is:\n");
    scanf("%lf",&Mohsen.deduct);

    struct employees Mariam;
    printf("Please Enter Your Salary:\n");
    scanf("%lf",&Mariam.salary);
    printf("Enter Your Bouns If You have:\n");
    scanf("%lf",&Mariam.bouns);
    printf("Enter Deduction If there is:\n");
    scanf("%lf",&Mariam.deduct);

    struct employees Maged;
    printf("Please Enter Your Salary:\n");
    scanf("%lf",&Maged.salary);
    printf("Enter Your Bouns If You have:\n");
    scanf("%lf",&Maged.bouns);
    printf("Enter Deduction If there is:\n");
    scanf("%lf",&Maged.deduct);

    printf("Total Values of the Team:\n");
    printf("Mohsen:\n");
    printf("Salary:%lf\n",Mohsen.salary);
    printf("Bouns:%lf\n",Mohsen.bouns);
    printf("Deduction:%lf\n",Mohsen.deduct);
    printf("Total:%lf\n",(Mohsen.salary+Mohsen.bouns)-Mohsen.deduct);
    printf("----------------------------\n");
    printf("Mariam:\n");
    printf("Salary:%lf\n",Mariam.salary);
    printf("Bouns:%lf\n",Mariam.bouns);
    printf("Deduction:%lf\n",Mariam.deduct);
    printf("Total:%lf\n",(Mariam.salary+Mariam.bouns)-Mariam.deduct);
    printf("----------------------------\n");
    printf("Maged:\n");
    printf("Salary:%lf\n",Maged.salary);
    printf("Bouns:%lf\n",Maged.bouns);
    printf("Deduction:%lf\n",Maged.deduct);
    printf("Total:%lf\n",(Maged.salary+Maged.bouns)-Maged.deduct);
    return 0;
}
