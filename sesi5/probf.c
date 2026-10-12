#include <stdio.h>

int main()
{
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);
    int time1 = k - x;
    int time2 = y - k;

    if (time1 == time2 && time1 >= 0)
    {
        printf("%d\n", time1);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}