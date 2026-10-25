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
            if ((j % 3 == 0 || j % 5 == 0) && j % 15 != 0)
            {
                printf("%d Jojo\n", j);
            }
            else
            {
                printf("%d Lili\n", j);
            }
        }
    }
    return 0;
}
