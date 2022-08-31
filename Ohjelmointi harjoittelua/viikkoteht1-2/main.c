#include <stdio.h>

int main()
{
    float ca;
    float fa;
    printf("Anna lampotila Celsius asteina\n");
    scanf("%f",&ca);
    fa=1.8*ca+32;
    printf("Antamasi lampotila %.1f Fahrenheit asteina %.1f\n",ca,fa);
    return 0;
}
