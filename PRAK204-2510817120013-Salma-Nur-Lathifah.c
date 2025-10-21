#include <stdio.h>

int main()
{
    float r, tinggi, volume, luas, keliling, pi = 3.142857;

    scanf ("%f %f", &r, &tinggi);

    volume = pi * (r * r) * tinggi;
    luas = 2 * pi * r * (r + tinggi);
    keliling = 2 * pi * r;

    printf ("Volume = %.2f \n", volume);
    printf ("Luas = %.2f \n", luas);
    printf ("Keliling = %.2f \n", keliling);

    return 0;
}