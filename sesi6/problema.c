#include <stdio.h>

int main()
{
    int T, N, tangkapan_hewan_harian, total;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        total = 0;
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &tangkapan_hewan_harian);
            total += tangkapan_hewan_harian;
        }
        printf("Case #%d: %d\n", i, total);
    }
    return 0;
}