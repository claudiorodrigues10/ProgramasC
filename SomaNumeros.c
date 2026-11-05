#include <stdio.h>
int main() {
    int numero, soma = 0, n;
    printf("Quantos numeros voce ira somar?: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro! Digite um numero valido: ");
        scanf("%*s");
    }
    for (int i = 1; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        while (scanf("%d", &numero) != 1) {
            printf("Erro! Digite um numero valido: ");
            scanf("%*s");
        }
        soma += numero;
    }
    printf("A soma dos numeros eh: %d\n", soma);
    return 0;
}
