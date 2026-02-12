
#include <stdio.h>

int lerNumero() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    return num;
}

int ehPrimo(int num) {
    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void mostrarResultado(int r) {
    if (r == 1)
        printf("Eh primo\n");
    else
        printf("Nao eh primo\n");
}

int main() {
    int num, r;

    num = lerNumero();
    r = ehPrimo(num);
    mostrarResultado(r);

    return 0;
}
