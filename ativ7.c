#include <stdio.h>

int lerNumero() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    return n;
}

int ehPerfeito(int num) {
    int i, soma = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num)
        return 1;
    else
        return 0;
}

void mostrarResultado(int resultado, int num) {
    if (resultado == 1)
        printf("%d eh um numero perfeito\n", num);
    else
        printf("%d nao eh um numero perfeito\n", num);
}

int main() {
    int numero, resultado;

    numero = lerNumero();
    resultado = ehPerfeito(numero);
    mostrarResultado(resultado, numero);

    return 0;
}
