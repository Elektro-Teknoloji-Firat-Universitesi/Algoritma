#include <stdio.h>

// Sayıları topla ve sonucu döndür
int toplam(int sayi)
{
    int i, toplam = 0;
    for (i = 1; i <= sayi; i++)
        toplam += i;

    return toplam;
}

int main()
{
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);
    printf("Toplam: %d", toplam(sayi));

    return 0;
}
