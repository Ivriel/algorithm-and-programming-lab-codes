#include <stdio.h>

int main()
{
    float salesInputted, totalSalary;
    float baseSalary = 200;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &salesInputted);

    while (salesInputted != -1)
    {
        totalSalary = baseSalary + (salesInputted * 0.09);
        printf("Salary is $%.2f\n", totalSalary);
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &salesInputted);
    }

    return 0;
}