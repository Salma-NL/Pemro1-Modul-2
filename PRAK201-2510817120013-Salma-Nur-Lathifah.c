#include <stdio.h>
int main()
{
    char nama[50], nim[20], paralel[5], ttl[30], alamat [50], hobby[30], no_hp[15];
    printf ("Nama                 : ");
    fgets(nama, 50, stdin);
    printf ("NIM                  : ");
    fgets(nim, 20, stdin);
    printf ("Kelas Paralel        : ");
    fgets(paralel, 5 , stdin);
    printf ("Tempat/Tanggal Lahir : ");
    fgets (ttl, 30, stdin);
    printf ("Alamat               : ");
    fgets(alamat, 50, stdin);
    printf ("Hobby                : ");
    fgets (hobby, 30, stdin);
    printf ("No. HP               : ");
    fgets (no_hp, 15, stdin);

    printf ("\n");
    printf ("Nama                 : %s", nama);
    printf ("NIM                  : %s", nim);
    printf ("Kelas Paralel        : %s", paralel);
    printf ("Tempat/Tanggal Lahir : %s", ttl);
    printf ("Alamat               : %s", alamat);
    printf ("Hobby                : %s", hobby);
    printf ("No. HP               : %s", no_hp);
return 0;
}