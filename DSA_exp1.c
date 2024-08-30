#include <stdio.h>
struct empldb{
    char name[10];
    int id;
    int salary;
}emp;
int main(){
    printf("Enter the details of the employee:\n");
    printf("Enter the name of the name:");
    scanf("%s",emp.name);
    printf("Enter the id number of the employee:");
    scanf("%d",&emp.id);
    printf("Enter the salary of the employee:");
    scanf("%d",&emp.salary);
    printf("\n");
    printf("Name: %s\n",emp.name);
    printf("ID no.: %d\n",emp.id);
    printf("Salary: %d\n",emp.salary);
}
