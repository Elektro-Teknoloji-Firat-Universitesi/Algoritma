#include <stdio.h>

int main(void) {
  int sayi;

  // Klavyeden bir sayı alalım
  printf("Bir sayi giriniz: ");
  scanf("%d", &sayi);

  // Sayı çift mi kontrol edelim
  if (sayi % 2 == 0) {
    // Sayı çift ise 5 ile çarpalım
    sayi = sayi * 5;
  } else {
    // Sayı tek ise 10 ile çarpalım
    sayi = sayi * 10;
  }

  // Sonucu ekrana yazalım
  printf("Sonuc: %d\n", sayi);

  return 0;
}
