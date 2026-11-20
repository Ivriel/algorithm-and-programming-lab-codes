#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int number;
    scanf("%d", &number);
    if (number >= 0)
    {
        printf("Hasilnya adalah: %lld\n", factorial(number));
    }
    else
    {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif\n");
    }
    return 0;
}