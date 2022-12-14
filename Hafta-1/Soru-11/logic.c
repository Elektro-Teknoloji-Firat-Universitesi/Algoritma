#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Sinyal değerleri için boyutu 20 olan bir dizi oluşturalım
    int sinyal[20];

    // Sinyal değerlerini 0 yada 1 olacak şekilde rastgele bir biçimde atayan bir for döngüsü oluşturalım
    for (int i = 0; i < 20; i++) {
        sinyal[i] = rand() % 2;
    }

    // Sinyal değerlerini ekrana yazdıralım
    printf("Sinyal degerleri: ");
    for (int i = 0; i < 20; i++) {
        printf("%d", sinyal[i]);
    }

    // Yükselen kenar ve düşen kenarlar için değişkenler oluşturalım
    int yukselen_kenar = 0;
    int dusen_kenar = 0;

    // Sinyalin grafikte yükselen kenar mı yoksa düşen kenar mı olduğunu bulmak için bir for döngüsü oluşturalım
    for (int i = 0; i < 20; i++) {
        // Sinyalin 0 dan 1 e geçtiği noktaları bulmak için bir if koşulu oluşturalım
        if (sinyal[i] == 0 && sinyal[i + 1] == 1) {
            // Sinyalin 0 dan 1 e geçtiği noktaları yükselen kenar olarak sayalım
            yukselen_kenar++;
        }
        // Sinyalin 1 den 0 a geçtiği noktaları bulmak için bir if koşulu oluşturalım
        if (sinyal[i] == 1 && sinyal[i + 1] == 0) {
            // Sinyalin 1 den 0 a geçtiği noktaları düşen kenar olarak sayalım
            dusen_kenar++;
        }
    }

    // Sinyalin yükselen kenar sayısını ekrana yazdıralım
    printf("\nYukselen kenar sayisi: %i", yukselen_kenar);

    // Sinyalin düşen kenar sayısını ekrana yazdıralım
    printf("\nDusen kenar sayisi: %i", dusen_kenar);

    return 0;
}