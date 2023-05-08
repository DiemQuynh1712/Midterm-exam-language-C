#include <stdio.h>
int main()//main function
{
    int n;//declare n variable, n is the number of rows and columns of the figure
    printf("Enter number of rows and columns: ");//ask the user to enter the number of rows and columns of the figure
    scanf("%d", &n);//enter n
    for (int i = 1; i <= n; i++)//use for loop, create counter variable i = 1, i runs from 1 to n, i increment by 1 unit
                                //i is the number of rows
                                //for each row, create a "smaller for loop" to print out the characters inside the row
    {
        for (int j = 1; j <= n - i; j++)//the for loop prints the "#" of each row, the number of "#" is equal to n - i
            printf("#");
        for (int j = 1; j <= i; j++)//the program runs the next for loop, prints the "*" of each row, the number of "*" is equal to i
            printf("*");
        printf("\n");//after printing the # and * as required, the program breaks the line and goes to the 2nd row, i = 2
                    //Continue to perform the loop until the condition is no longer satisfied, obtained the required figure
    }
    return 0;
}