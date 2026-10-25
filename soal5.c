#include <stdio.h>

int main()
{
    int jam_sewa, menit_sewa, total;

    printf("masukkan jam sewa (menit): ");
    scanf("%d", &menit_sewa);

    jam_sewa = menit_sewa / 60;

    if (menit_sewa % 60 != 0)
    {
        jam_sewa += 1;
    }

    if (jam_sewa <= 2)
    {
        total = 15000;
    }
    else if (jam_sewa <= 6)
    {
        total = 15000 + ((jam_sewa - 2) * 8000);
    }
    else
    {
        total = 60000;
    }

    printf("Durasi dihitung: %d jam\n", jam_sewa);
    printf("Total biaya sewa: Rp %d\n", total);
    return 0;
}