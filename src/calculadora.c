#include <stdio.h>

int main() {
    int a, b;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    
    if (operador == '+'){
        printf("Resultado: %d\n", a + b);
    } else if (operador == '-'){
        printf("Resultado: %d\n", a - b);
    } else if (operador == '*'){
        printf("Resultado: %d\n", a * b);
    } else if (operador == '/'){
        if (b != 0) {
            printf("Resultado: %.2f\n", (float)a / b);
        } else {
            printf("Erro: Divisao por zero nao e permitida.\n");
        }
    } else {
        printf("Erro: Operador invalido.\n");
    }
    return 0;
}