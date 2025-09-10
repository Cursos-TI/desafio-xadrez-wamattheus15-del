#include <stdio.h>

int main(void) {
    // Bispo: 5 casas na diagonal superior direita
    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Diagonal superior direita: %d\n", i);
    }

    // Torre: 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita: %d\n", i);
    }

    // Rainha: 3 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    for (int i = 1; i <= 3; i++) {
        printf("Esquerda: %d\n", i);
    }

    return 0;
}
