#include <stdio.h>

// Função por valor (não altera a variável original)
void dobrarValor(int x) {
    x = x * 2;
    printf("Dentro da função (por valor): %d\n", x);
}

// Função por referência (usa ponteiro e altera a variável original)
void dobrarReferencia(int *x) {
    *x = *x * 2;
    printf("Dentro da função (por referência): %d\n", *x);
}

int main() {
    int numero = 10;

    printf("Valor inicial: %d\n", numero);

    // Chamada por valor
    dobrarValor(numero);
    printf("Depois da função por valor: %d\n", numero);

    // Chamada por referência
    dobrarReferencia(&numero);
    printf("Depois da função por referência: %d\n", numero);

    return 0;
}
