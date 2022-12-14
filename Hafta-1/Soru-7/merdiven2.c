#include <stdio.h>

int main()
{
    int merdiven_boyutu;
    int sayac = 1;

    // Merdiven boyutunu klavyeden alalım
    printf("Merdiven boyutunu giriniz: ");
    scanf("%d", &merdiven_boyutu);

    // Merdiven boyutu kadar bir for döngüsü oluşturalım
    for (int i = 1; i <= merdiven_boyutu; i++) {
        // Her bir döngüde i kadar bir for döngüsü oluşturalım
        for (int j = 1; j <= i; j++) {
            // Her bir döngüde bir sütun sayısını yazalım
            printf("%i ", sayac);

            // Her bir değer yazdırıldığında sayacı arttıralım
            sayac++;
        }
        // Her bir döngüde bir alt satıra geçelim
        printf("\n");
    }

    return 0;
}