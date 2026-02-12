#include <stdio.h>

double lerNota() {
    double nota;
    scanf("%lf", &nota);
    return nota;
}

char lerTipo() {
    char tipo;
    printf("Digite A (aritmetica), P (ponderada) ou H (harmonica): ");
    scanf(" %c", &tipo);
    return tipo;
}

double calcularMedia(double n1, double n2, double n3, char tipo) {

    if (tipo == 'A' || tipo == 'a')
        return (n1 + n2 + n3) / 3.0;

    else if (tipo == 'P' || tipo == 'p')
        return (n1*5 + n2*3 + n3*2) / 10.0;

    else if (tipo == 'H' || tipo == 'h')
        return 3.0 / ((1.0/n1) + (1.0/n2) + (1.0/n3));

    else {
        printf("Tipo invalido!\n");
        return 0;
    }
}

void mostrarMedia(double media) {
    printf("Media: %.2lf\n", media);
}

int main() {

    double n1, n2, n3, media;
    char tipo;

    printf("Digite 3 notas:\n");
    n1 = lerNota();
    n2 = lerNota();
    n3 = lerNota();

    tipo = lerTipo();

    media = calcularMedia(n1, n2, n3, tipo);

    mostrarMedia(media);

    return 0;
}
