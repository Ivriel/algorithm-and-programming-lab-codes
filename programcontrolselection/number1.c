#include <stdio.h>

int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("Hasil metode 1: %d\n", max);

    if (a >= b && a >= c)
    {
        printf("Hasil metode 2: %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Hasil metode 2: %d\n", b);
    }
    else
    {
        printf("Hasil metode 2: %d\n", c);
    }

    if (a >= b)
    {
        if (a >= c)
        {
            printf("Hasil metode 3: %d\n", a);
        }
        else
        {
            printf("Hasil metode 3: %d\n", c);
        }
    }
    else
    {
        if (b >= c)
        {
            printf("Hasil metode 3: %d\n", b);
        }
        else
        {
            printf("Hasil metode 3: %d\n", c);
        }
    }
    return 0;
}