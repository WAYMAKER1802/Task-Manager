#include <stdio.h>

struct Employee
{
    char name[50];
    float basic;
    float gross;
};

int main()
{
    struct Employee emp[100];
    int i;

    printf("Enter details of 100 employees:\n");

    for (i = 0; i < 100; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic);

        // DA = 52% of basic
        float da = 0.52 * emp[i].basic;

        // Gross salary
        emp[i].gross = emp[i].basic + da;
    }

    printf("\n--- Employee Gross Salary List ---\n");
    for (i = 0; i < 100; i++)
    {
        printf("Name: %-20s  Gross Salary: %.2f\n", emp[i].name, emp[i].gross);
    }

    return 0;
}
