#include <stdio.h>

// İki sayıyı ve operatörü al, işlem yap ve sonucu döndür
// Float olmasının sebebi: 1/2 = 0.5 olması
float islem(float sayi1, float sayi2, char operator)
{
    float sonuc;

    switch (operator)
    {
        case '+':
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            sonuc = sayi1 / sayi2;
            break;
        default:
            printf("Geçersiz operatör\n");
    }

    return sonuc;
}

int main()
{
    float sayi1, sayi2;
    char operator;

    printf("Sayi1: ");
    scanf("%f", &sayi1);

    printf("Sayi2: ");
    scanf("%f", &sayi2);

    printf("Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // %.2f ile sadece noktadan sonraki 2 basamağı yazdır
    printf("Sonuc: %.2f", islem(sayi1, sayi2, operator));

    return 0;
}
