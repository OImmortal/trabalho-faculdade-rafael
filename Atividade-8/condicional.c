#include <stdio.h>
#include <stdlib.h>

int CalcularQuadrado(int numero) {
    return numero * numero;
}

int CalcularFatorial(int numero) {
    if (numero == 0) {
        return 1;
    } else {
        return numero * CalcularFatorial(numero - 1);
    }
}

int main() {
    
    int opcao = 0;
    
    while (opcao != 3) {
        printf("1 - Calcule o quadrado de um numero\n");
        printf("2 - Calcule o fatorial de um numero\n");
        printf("3 - Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int numero;
                printf("Digite um numero: ");
                scanf("%d", &numero);
                int quadrado = CalcularQuadrado(numero);
                printf("O quadrado de %d e %d\n", numero, quadrado);
                break;
            }
            case 2: {
                int numero;
                printf("Digite um numero: ");
                scanf("%d", &numero);
                int fatorial = CalcularFatorial(numero);
                printf("O fatorial de %d e %d\n", numero, fatorial);
                break;
            }
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }

    }

    return 0;
}