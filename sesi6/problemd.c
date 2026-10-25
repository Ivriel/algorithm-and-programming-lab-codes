#include <stdio.h>

int main()
{
    int T, N, M, O;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d %d", &N, &M, &O);
        if (N + M > O && N + O > M && M + O > N)
        {
            printf("Case #%d: Yes\n", i);
        }
        else
        {
            printf("Case #%d: No\n", i);
        }
    }
    return 0;
}