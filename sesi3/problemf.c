#include <stdio.h>

typedef long long ll;

ll S[400005], W[400005];

int main()
{
    int n;
    ll m;
    while (scanf("%d", &n) == 1)
    {
        for (int j = 0; j < n; j++)
        {
            ll a;
            scanf("%lld", &a);
            S[j + 1] = S[j] + a;
            W[j + 1] = W[j] + (ll)j * a;
        }
        scanf("%lld", &m);

        ll best = 0;
        for (int x = 0; x < n; x++)
        {
            if (S[x + 1] - S[x] > m)
                continue;

            int lo = x + 1, hi = n;
            while (lo < hi)
            {
                int mid = lo + (hi - lo + 1) / 2;
                ll f = (ll)mid * (S[mid] - S[x]) - (W[mid] - W[x]);
                if (f <= m)
                    lo = mid;
                else
                    hi = mid - 1;
            }
            ll f = (ll)lo * (S[lo] - S[x]) - (W[lo] - W[x]);
            if (f > best)
                best = f;
        }
        printf("%lld\n", best);
    }
    return 0;
}