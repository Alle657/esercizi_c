#include <stdio.h>

int main() {
    float num1, num2, media;

    printf("Inserisci il primo numero: ");
    scanf("%f", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2;


    printf("La media dei due numeri e: %.2f\n", media);

    return 0;
}
