#include <stdio.h>

int main()
{
    float sivu1;
    float sivu2;
    float summa;

    printf("Anna kolmion kanta metreina\n");
    scanf("%f", &sivu1);

    printf("Anna kolmion korkeus metreina\n");
    scanf("%f", &sivu2);

    summa=(sivu1*sivu2)/2;

    printf("kun kolmion kanta on %.2f M ja korkeus %.2f M niin kolmion ala on %.2f neliometria\n", sivu1, sivu2, summa);

    return 0;
}
