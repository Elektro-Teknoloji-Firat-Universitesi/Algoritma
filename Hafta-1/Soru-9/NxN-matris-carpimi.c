#include <stdio.h>

int main(void) {

    // NxN boyutlarında matrisler için N değerini tanımlayın
    int N;

    // N değerini kullanıcıdan alalım
    printf("Matris boyutunu giriniz: ");

    // İki NxN boyutlarında matris tanımlayın
    int a[N][N], b[N][N];

    // İki matrisi kullanıcıdan alın
    printf("Birinci matrisi giriniz: ");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        scanf("%d", &a[i][j]);
        }
    }

    printf("Ikinci matrisi giriniz: ");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        scanf("%d", &b[i][j]);
        }
    }

    // Sonuç matrisini tanımlayın ve sıfırla doldurun
    int c[N][N] = {0};

    // İki matrisi çarpın ve sonucu c matrisine kaydedin
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Sonuç matrisini ekrana yazdırın
    printf("Sonuc matrisi: ");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
