#include <stdio.h>

int lerSegundos() {
    int s;
    printf("Digite os segundos: ");
    scanf("%d", &s);
    return s;
}

void converter(int total) {
    int h, m, s;

    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;

    printf("%d horas, %d minutos, %d segundos\n", h, m, s);
}

int main() {
    int total;

    total = lerSegundos();
    converter(total);

    return 0;
}

