#include <stdio.h>

double lerMedia() {
    double m;
    scanf("%lf", &m);
    return m;
}

int main() {
    double m;

    printf("Digite a media: ");
    m = lerMedia();

    if (m < 5)
        printf("Conceito D\n");
    else if (m < 7)
        printf("Conceito C\n");
    else if (m < 9)
        printf("Conceito B\n");
    else
        printf("Conceito A\n");

    return 0;
}

