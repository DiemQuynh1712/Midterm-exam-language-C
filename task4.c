#include <stdio.h>
int main ()//main function
{
    int n, m;//declare n, m variable
    printf("n: ");//ask the user to enter n as the first number
    scanf("%d", &n);//enter n
    printf("m: ");//ask the user to enter m as the last number
    scanf("%d", &m);//enter m
    int sum = 0;//declare sum variable (calculate the sum)
    for (int i = n; i <= m; i++) {//use for loop, create counter variable i, let i run from n to m, i increment by 1 unit
        sum += i;//for each i, sum will be equal to sum plus the value of i
        //for example: n = 2, m = 9, sum = 0, i = n = 2 -> sum = 0 + 2 = 2
        //continue: i = 3 -> sum = 2 + 3 = 5
        //and so on until the variable i exceeds 9, end of loop, we get sum = 44
    }
    printf ("The sum of all the integers from %d through %d is %d\n", n, m, sum);//print the conclusion
    return 0;
}