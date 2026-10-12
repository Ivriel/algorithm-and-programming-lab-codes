#include <stdio.h>

int main()
{
    int octalNumber[100000];
    int decimalNumberInputted;
    int i = 0;

    scanf("%d", &decimalNumberInputted);

    while (decimalNumberInputted > 0)
    {
        octalNumber[i] = decimalNumberInputted % 8;
        decimalNumberInputted = decimalNumberInputted / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octalNumber[j]);
    }

    printf("\n");

    return 0;
}