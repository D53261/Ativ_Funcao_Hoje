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

    if (n % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}

