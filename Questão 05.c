#include <stdio.h>

int buscaBinaria(int lista[], int esquerda, int direita, int valor) {
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (lista[meio] == valor)
            return meio;

        if (lista[meio] > valor)
            direita = meio - 1;
        else
            esquerda = meio + 1;
    }

    return -1;
}

int main() {
    int n, valor;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int lista[n];

    printf("Digite os elementos em ordem crescente: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(lista, 0, n - 1, valor);

    if (resultado != -1)
        printf("O valor %d foi encontrado na posição %d\n", valor, resultado);
    else
        printf("O valor %d não foi encontrado\n", valor);

    return 0;
}