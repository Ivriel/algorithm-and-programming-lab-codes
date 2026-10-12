#include <stdio.h>

int main()
{
    // t = test case, a = harga secangkir kopi , b = persen cashback , c= jumlah maksimum cashback
    // output tiap case adalah cashback yang didapat.
    int T;
    long long int a, b, c, discountNominal;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        discountNominal = a * b / 100;

        if (discountNominal > c)
        {
            printf("Case #%d: %lld\n", i, c);
        }
        else
        {
            printf("Case #%d: %lld\n", i, discountNominal);
        }
    }
    return 0;
}