#include <stdio.h>

int count = 0;
int F(int n)
{
    if (n == 3 || n == 4)
    {
        count++;
    }

    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 2;
    }
    else if (n % 3 == 0)
    {
        return F(n - n / 3) + 1;
    }
    else
    {
        return F(n - 1) + n + F(n - 2) + 1;
    }
}

int main()
{
    int testCase, numberCounted;
    scanf("%d", &testCase);

    for (int i = 1; i <= testCase; i++)
    {
        scanf("%d", &numberCounted);
        count = 0;
        int result = F(numberCounted);
        printf("Case #%d: %d %d\n", i, result, count);
    }
    return 0;
}