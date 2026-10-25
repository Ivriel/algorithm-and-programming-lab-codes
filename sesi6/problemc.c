#include <stdio.h>

int main()
{
    int N;
    long long int result;
    scanf("%d", &N);
    result = (1LL << N) - 1;
    printf("%lld\n", result);
    return 0;
}