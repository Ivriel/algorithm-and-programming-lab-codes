#include <stdio.h>

int main()
{
    int T;
    long long int N;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%lld", &N);
        int is_prime = 1;
        if (N <= 1)
        {
            is_prime = 0;
        }
        for (int j = 2; j * j <= N; j++)
        {
            if (N % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("Case #%d: prime\n", i);
        }
        else
        {
            printf("Case #%d: not prime\n", i);
        }
    }
    return 0;
}