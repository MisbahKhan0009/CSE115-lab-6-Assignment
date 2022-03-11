#include <stdio.h>
#include <math.h>

int main()
{
    int n, j, i = 5, sum = 0, d = 2;

    printf("\nEnter the last value of the series: ");
    scanf("%d", &n);

    while (i <= n)
    {

        i += d;
        d += 2;
        j = pow(i, 2);
        sum += j;
        printf("%d ", i);
    }

    printf("sum = %d\n\n", sum);

    return 0;
}