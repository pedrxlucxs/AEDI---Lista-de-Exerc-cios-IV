#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Menor de idade\n");
    } else if (idade <= 65) {
        printf("Maior de idade\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}