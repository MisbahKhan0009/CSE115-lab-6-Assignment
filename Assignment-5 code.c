#include <stdio.h>
int main()
{
    int i, n, j;

    printf("\nEnter number to print the multiplication table of: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        j = n * i;
        printf("%d X %d = %d \n", n, i, j);
    }

    return 0;
}
