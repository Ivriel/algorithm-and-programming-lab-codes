#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, sum, product, difference, quotient, remainder;

    printf("Masukkan nomor pertama:\n");
    scanf("%d", &number1);
    printf("Masukkan nomor kedua:\n");
    scanf("%d", &number2);

    sum = number1 + number2;
    product = number1 * number2;
    difference = abs(number1 - number2);
    quotient = number1 / number2;
    remainder = number1 % number2;

    printf("\nHasil penjumlahan = %d\nHasil perkalian = %d\nHasil selisih kedua angka = %d\nHasil pembagian = %d\nHasil sisa bagi = %d\n", sum, product, difference, quotient, remainder);
    return 0;
}