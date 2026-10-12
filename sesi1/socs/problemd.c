#include <stdio.h>

long long gcd(long long a, long long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int t;
    scanf("%d", &t);

    for (int case_number = 1; case_number <= t; case_number++)
    {
        int n;
        scanf("%d", &n);
        long long arr[100];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }

        long long hasil_gcd = arr[0];
        for (int i = 1; i < n; i++)
        {
            hasil_gcd = gcd(hasil_gcd, arr[i]);
        }
        printf("Case #%d: %lld\n", case_number, hasil_gcd);
    }

    return 0;
}