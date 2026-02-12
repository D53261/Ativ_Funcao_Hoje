#include <stdio.h>

double lerRaio() {
    double raio;
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    return raio;
}

double calcularVolume(double raio) {
    return (4.0/3.0) * 3.14159 * raio * raio * raio;
}

void mostrarVolume(double volume) {
    printf("Volume: %.2lf\n", volume);
}

int main() {
    double r, v;

    r = lerRaio();
    v = calcularVolume(r);
    mostrarVolume(v);

    return 0;
}

