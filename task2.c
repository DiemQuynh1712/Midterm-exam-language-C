#include <stdio.h>
int main()
{
    float tax;
    float income;
    float actual_income;
    printf("\nyour income: ");
    scanf("%f", &income);
    while (income >= 0)
    {
        if (income <= 5000) 
        {
            tax = 0;
            printf("tax = %2.2f\n", tax);
            actual_income = income - tax;
            printf("actual income = %.2f", actual_income);
        }
        else if (income <= 15000)
        {
            tax = (income - 5000)*0.1;
            printf("tax = %2.2f\n", tax);
            actual_income = income - tax;
            printf("actual income = %.2f", actual_income);
        }
        else if (income <= 35000)
        {
            tax = 10000 * 0.1 + (income - 15000)*0.15;
            printf("tax = %2.2f\n", tax);
            actual_income = income - tax;
            printf("actual income = %.2f", actual_income);
        }
        else 
        {
            tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000)*0.2;
            printf("tax = %2.2f\n", tax);
            actual_income = income - tax;
            printf("actual income = %.2f", actual_income);
        }
        printf("\nyour income: ");
        scanf("%f", &income);

    }
    return 0;
}