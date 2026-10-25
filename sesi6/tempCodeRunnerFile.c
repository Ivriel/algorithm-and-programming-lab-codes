#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);
    (1LL << N) - 1;
    printf("%lld\n", N);
    return 0;
}