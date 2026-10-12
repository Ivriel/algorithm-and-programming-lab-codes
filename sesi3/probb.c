#include <stdio.h>

int main()
{
    int a, b, modulus;
    scanf("%d %d", &a, &b);
    modulus = a % b;
    printf("%d\n", modulus);
    return 0;
}