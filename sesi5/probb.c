#include <stdio.h>

int main()
{
    int T;
    long long int N, M, multiply;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%lld %lld", &N, &M);
        multiply = N * M;
        if (multiply % 2 == 0)
        {
            printf("Case #%d: Party time!\n", i);
        }
        else
        {
            printf("Case #%d: Need more frogs\n", i);
        }
    }
    return 0;
}