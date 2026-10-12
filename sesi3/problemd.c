#include <stdio.h>

int main()
{
    int testCase;
    long long int a, b, c;
    scanf("%d", &testCase);
    for (int i = 1; i <= testCase; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a + b > c && a + c > b && b + c > a)
        {
            printf("BISA\n");
        }
        else
        {
            printf("TIDAK BISA\n");
        }
    }
    return 0;
}