#include <stdio.h>

int main()
{
    int min, max, dif, sum = 0, i;

    printf("\nEnter the Minimum number: ");
    scanf("%d", &min);

    printf("Enter the Maximum number: ");
    scanf("%d", &max);

    printf("Enter the Common difference: ");
    scanf("%d", &dif);

    printf("Sum of ");
    for (i = min; i <= max; i *= dif)
    {
        sum += i;
        printf("%d  ", i);
    }

    printf("is %d\n\n", sum);

    return 0;
}