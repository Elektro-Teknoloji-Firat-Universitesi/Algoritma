#include <stdio.h>

int main()
{
    // Dizi boyutunu kullanıcıdan alalım
    int dizi_boyutu;

    // Diziyi tanımlayalım
    int dizi[dizi_boyutu];

    // Dizinin elemanlarını kullanıcıdan alalım
    for (int i = 0; i < dizi_boyutu; i++) {
        scanf("%d", &dizi[i]);
    }

    // Dizinin en büyük elemanını bulalım
    int en_buyuk = dizi[0]; // Şimdilik dizinin ilk elemanını en büyük olarak kabul edelim

    for (int i = 0; i < dizi_boyutu; i++) {
        if (dizi[i] > en_buyuk) {
            en_buyuk = dizi[i];
        }
    }

    // En büyük elemanı ekrana yazdıralım
    printf("En buyuk eleman: %d", en_buyuk);

    return 0;
}