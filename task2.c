#include <stdio.h>
int main()//main function
{
    float tax;//declare tax variable
    float income;//declare income variable
    float actual_income;//declare actual_income variable
    printf("\nyour income: ");//Print a quote to prepare to enter "income" from the keyboard
    scanf("%f", &income);//Enter "income" from keyboard
    while (income >= 0)//while loop allows users to enter different incomes continuously with the condition income >= 0
                        //income < 0, immediately end the loop
    {
        if (income <= 5000) //For each income value, it will be in one of the following cases, in which case it will be
                            //perform the corresponding calculation formula
        {
            tax = 0;
            printf("tax = %2.2f\n", tax);
            actual_income = income - tax;
            printf("actual income = %.2f", actual_income);
        }
        else if (income <= 15000)
        {
            tax = (income - 5000)*0.1;//assign tax calculation formula
            printf("tax = %2.2f\n", tax);//print tax
            actual_income = income - tax;//assign actual_income calculation formula
            printf("actual income = %.2f", actual_income);//print actual_income
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
        //After the calculation is complete, It will continue to run the printf and scanf sentences for the user to enter the next income value
        //After entering, the program will continue while loop if the condition is met
        printf("\nyour income: ");//Print a quote to prepare to enter "income" from the keyboard
        scanf("%f", &income);//Enter "income" from the keyboard

    }
    return 0;
}