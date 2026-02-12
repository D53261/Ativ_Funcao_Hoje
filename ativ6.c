#include <stdio.h>

int lerValor() {
    int v;
    scanf("%d", &v);
    return v;
}

int calcularDias(int a, int m, int d) {
    return a*365 + m*30 + d;
}

int main() {
    int anos, meses, dias, total;

    printf("Digite anos, meses e dias:\n");
    anos = lerValor();
    meses = lerValor();
    dias = lerValor();

    total = calcularDias(anos, meses, dias);

    printf("Total em dias: %d\n", total);

    return 0;
}

