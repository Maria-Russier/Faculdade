#include <stdio.h>

int main() {
    int i;
    float a, b, c, temp;

    printf("Escolha um numero de 1 a 3: ");
    scanf("%d", &i);

    printf("Escreva tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    switch (i) {
        case 1:  
            if (a > b) { temp = a; a = b; b = temp; }
            if (a > c) { temp = a; a = c; c = temp; }
            if (b > c) { temp = b; b = c; c = temp; }
            printf(" %.2f %.2f %.2f\n", a, b, c);
            break;

        case 2: 
            if (a < b) { temp = a; a = b; b = temp; }
            if (a < c) { temp = a; a = c; c = temp; }
            if (b < c) { temp = b; b = c; c = temp; }
            printf(" %.2f %.2f %.2f\n", a, b, c);
            break;

        case 3: 
            if (a >= b && a >= c) {
                printf("%.2f %.2f %.2f\n", b, a, c);
            } else if (b >= a && b >= c) {
                printf(" : %.2f %.2f %.2f\n", a, b, c);
            } else {
                printf("%.2f %.2f %.2f\n", a, c, b);
            }
            break;

        default:
            printf("Valor invalido!\n");
    }

}