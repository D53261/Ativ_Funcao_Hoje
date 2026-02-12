#include <stdio.h>
#include <math.h>

double lerValor() {
    double valor;
    scanf("%lf", &valor);
    return valor;
}

double calcularDelta(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

void calcularBhaskara(double a, double b, double delta) {

    double x1, x2;

    if (delta < 0) {
        printf("Nao existem raizes reais\n");
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raiz 1: %.2lf\n", x1);
        printf("Raiz 2: %.2lf\n", x2);
    }
}

int main() {

    double a, b, c, delta;

    printf("Digite o valor de a: ");
    a = lerValor();

    printf("Digite o valor de b: ");
    b = lerValor();

    printf("Digite o valor de c: ");
    c = lerValor();

    delta = calcularDelta(a, b, c);

    calcularBhaskara(a, b, delta);

    return 0;
}
