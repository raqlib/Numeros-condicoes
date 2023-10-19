#include <stdio.h>

float x;

int main() {
    printf("Introduza um numero: ");
    scanf("%f", &x);
    
    if (x>=1.0 && x<=1.9) {
    printf("O numero %.2f encontra-se no intervalo entre 1.0 e 1.9", x);

    } else {
        printf("O numero %.2f nao se encontra no intervalo entre 1.0 e 1.9", x);
    }
    return 0;
}