#include <stdio.h>

int main(){
    float nilai1, nilai2;
    printf("Test case ke 1\n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &nilai2);
    float hasil1 = (nilai1 + nilai2);
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n\n", nilai1, nilai2, hasil1);

    float nilai3, nilai4;
    printf("Test case ke 2 \n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai3);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &nilai4);
    float hasil2 = (nilai3 + nilai4);
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", nilai3, nilai4, hasil2);

return 0;
}