#include <stdio.h>
#include <stdlib.h>

// Ondalık sayıyı ikilik sayıya çevir
void dec_to_bin(int number) {
  if (number == 0) return;
  dec_to_bin(number / 2);
  printf("%d", number % 2);
}

int main() {
  int number;

  // Ondalık sayıyı alalım
  printf("Ondalık bir sayı giriniz: ");
  scanf("%d", &number);

  // Ondalık sayıyı ikilik sayıya çevirelim
  dec_to_bin(number);
  printf("\n");

  return 0;
}