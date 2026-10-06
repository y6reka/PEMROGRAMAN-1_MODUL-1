#include <stdio.h>
int main() {
    double harga_sepatu_a = 400000;
    double harga_sepatu_b = 350000;
    double diskon_a = 13;
    double diskon_b = 21;
    double harga_akhir_a = harga_sepatu_a * (1 - diskon_a / 100.0);
    double harga_akhir_b = harga_sepatu_b * (1 - diskon_b / 100.0);
    printf("Harga sepatu A adalah %.0f\n", harga_sepatu_a);
    printf("Harga sepatu B adalah %.0f\n", harga_sepatu_b);
    printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi %.0f\n", diskon_a, harga_akhir_a);
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi %.0f\n", diskon_b, harga_akhir_b);
    return 0;
}

