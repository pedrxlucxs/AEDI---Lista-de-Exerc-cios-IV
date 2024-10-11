#include <stdio.h>

int main() {
    int n;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    float notas[n];
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }

    // Selection Sort
    for (int i = 0; i < n; i++) {
        int maior = i;
        for (int j = i + 1; j < n; j++) {
            if (notas[j] > notas[maior]) {
                maior = j;
            }
        }
        float temp = notas[i];
        notas[i] = notas[maior];
        notas[maior] = temp;
    }

    printf("Notas ordenadas:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    return 0;
}