#include <stdio.h>

int lerNumero() {
    int n;
    scanf("%d", &n);
    return n;
}

int main() {
    int n;

    printf("Digite um numero: ");
    n = lerNumero();

    if (n >= 0)
        printf("Positivo\n");
    else
        printf("Negativo\n");

    return 0;
}

