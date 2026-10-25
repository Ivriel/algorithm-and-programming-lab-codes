#include <stdio.h>

int main()
{
    int T, N;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= N; j++)
        {
            if (j % 2 == 0)
            {
                printf("%d Genap\n", j);
            }
            else
            {
                printf("%d Ganjil\n", j);
            }
        }
    }
    return 0;
}