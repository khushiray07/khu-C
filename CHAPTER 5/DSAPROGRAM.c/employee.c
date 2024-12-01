#include <stdio.h>

struct employee {
    char *name;
    int age;
    int salary;
};

int manager() {
    struct employee manager;
    manager.age = 27;

    if (manager.age > 30) {
        manager.salary = 65000;
    } else {
        manager.salary = 55000;
    }

    return manager.salary;
}

int main() {
    struct employee empl, emp2;

    printf("Enter the salary of employee1: ");
    scanf("%d", &empl.salary);

    printf("Enter the salary of employee2: ");
    scanf("%d", &emp2.salary);

    printf("Employee 1 salary is: %d\n", empl.salary);
    printf("Employee 2 salary is: %d\n", emp2.salary);
    printf("Manager's salary is %d\n", manager());

    return 0;
}
