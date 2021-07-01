#include<stdio.h>
struct employee
{
    int age, contact, salary;
    char name[20];
}emp[20];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as name , age , contact , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",emp[i].name,&emp[i].age,&emp[i].contact,&emp[i].salary);
    }
    printf("\nNAME\t\tAGE\t\tCONTACT\t\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].contact,emp[i].salary);
    }
}
