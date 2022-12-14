#include <stdio.h>

int main()
{
    // İlk matrisi tanımlayın
    int a[2][2];

    // İlk matrisi kullanıcıdan alın
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // İkinci matrisi tanımlayın
    int b[2][2];

    // İkinci matrisi kullanıcıdan alın
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Sonuç matrisini tanımlayın
    int c[2][2];

    // İlk matris ile ikinci matrisi toplayın ve sonucu c matrisine atayın
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Sonuç matrisini ekrana yazdırın
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
