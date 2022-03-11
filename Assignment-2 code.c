#include <stdio.h>

int main()
{
    int i, j, sum = 0;

    for (i = 10000; i >= 8; i /= 5)
    {
        sum += i;
        printf("\n%d", i);
    }

    printf("\nSum of the series 10000+2000+400+...+8 is %d\n\n", sum);

    return 0;
}