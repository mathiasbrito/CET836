#include <stdio.h>

int main() {
    int idade;
    float altura;

    printf("Digite a sua idade e altura abaixo...\n");
    scanf("%d %f", &idade, &altura);

    printf("Sua idade é %d e sua altura é %f\n", idade, altura);

    return 0;
}
