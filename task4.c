#include <stdio.h>
int main ()
{
    int n, m;
    printf("n: ");
    scanf("%d", &n);
    printf("m: ");
    scanf("%d", &m);
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    printf ("The sum of all the integers from %d through %d is %d\n", n, m, sum);
    return 0;
}