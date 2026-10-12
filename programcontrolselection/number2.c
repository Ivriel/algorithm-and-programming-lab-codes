/*kesalahan pada codingan tersebut adalah kurangnya perintah break;
setelah baris printf pada case nomor 1.

Ini salah karena memang aturan dalam penggunaan switch case, perintah break; harus ditambah disetiap case bahkan sampai ke default.
perintah break; berguna untuk menghentikan program saat sudah memenuhi kondisi di suatu case, seperti contoh di soal adalah case 1.
Jika tidak ada perintah break; maka program akan mengalami fall-through (bablas) dan otomatis ikut menjalankan kode di dalam case 2.
 Akibatnya, nanti di layar akan tercetak dua kalimat sekaligus secara keliru karena case 1 bocor ke case 2.


Cara memperbaikinya adalah tinggal menambahkan kata kunci break;
tepat setelah aksi di case 1:
agar program langsung keluar dari blok switch setelah selesai mengerjakan tugasnya.
*/

// berikut adalah perbaikan kodenya yang sudah ditambah improvisasi juga.

#include <stdio.h>

int main()
{
    int n;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("The number is 1\n");
        break;
    case 2:
        printf("The number is 2\n");
        break;

    default:
        printf("The number is not 1 or 2\n");
        break;
    }
    return 0;
}