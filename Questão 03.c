#include <stdio.h>

int main() {
    int n;

    printf("Digite o número de produtos: ");
    scanf("%d", &n);

    float precos[n];
    printf("Digite os preços dos produtos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &precos[i]);
    }

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && precos[j] < precos[j - 1]; j--) {
            float temp = precos[j];
            precos[j] = precos[j - 1];
            precos[j - 1] = temp;
        }
    }

    printf("Preços ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n");

    return 0;
}
