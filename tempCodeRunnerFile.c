#include <stdio.h>

struct empldb {
    char name[10];
    int id;
    int salary;
}emp[];

int main() {
    int n;
    printf("Enter the number of employees you want to enter data for: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the details of employee %d:\n", i + 1);
        printf("Enter the name: ");
        scanf("%s", emp[i].name); // Input name into the 'name' field of the current employee
        printf("Enter the ID number: ");
        scanf("%d", &emp[i].id); // Input ID into the 'id' field of the current employee
        printf("Enter the salary: ");
        scanf("%d", &emp[i].salary); // Input salary into the 'salary' field of the current employee
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("The details of employee %d:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID no.: %d\n", emp[i].id);
        printf("Salary: %d\n", emp[i].salary); 
    }

    return 0; // Indicate successful program execution
}