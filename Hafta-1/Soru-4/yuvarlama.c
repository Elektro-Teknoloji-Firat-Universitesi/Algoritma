#include <stdio.h>

int main(void) {
  int dizi_boyutu;
  int i;

  // Dizinin boyutunu klavyeden alalım
  printf("Dizinin boyutunu giriniz: ");
  scanf("%d", &dizi_boyutu);

  // Diziyi oluşturalım
  int dizi[dizi_boyutu];

  // Dizinin elemanlarını klavyeden alalım
  printf("Dizinin elemanlarini giriniz: ");
  for (i = 0; i < dizi_boyutu; i++) {
    scanf("%d", &dizi[i]);
  }

  // Dizinin elemanlarını bir for döngüsü içerisinde kontrol edelim
  for (i = 0; i < dizi_boyutu; i++) {
        if (dizi[i] < 5) {
        // 5ten küçük elemanları 0 a yuvarlayalım
            dizi[i] = 0;
        } else if (dizi[i] >= 5) {
        // 5ten büyük elemanları 1 e yuvarlayalım
            dizi[i] = 1;
        }
    }

    // Dizinin elemanlarını ekrana yazalım
    printf("Dizinin elemanlari: ");
    for (i = 0; i < dizi_boyutu; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}

