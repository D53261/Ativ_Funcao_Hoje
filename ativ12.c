#include <stdio.h>

double lerAltura() {
    double a;
    scanf("%lf", &a);
    return a;
}

char lerSexo() {
    char s;
    scanf(" %c", &s);
    return s;
}

double calcularPeso(double altura, char sexo) {

    if (sexo == 'M' || sexo == 'm')
        return 72.7 * altura - 58;
    else
        return 62.1 * altura - 44.7;
}

int main() {
    double altura, peso;
    char sexo;

    printf("Digite a altura: ");
    altura = lerAltura();

    printf("Digite o sexo (M/F): ");
    sexo = lerSexo();

    peso = calcularPeso(altura, sexo);

    printf("Peso ideal: %.2lf\n", peso);

    return 0;
}

