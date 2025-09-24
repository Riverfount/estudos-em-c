#include <stdio.h>

int main(){
    int val_saque;
    printf("Digite o valor do saque: ");
    scanf("%d", &val_saque);

    if (val_saque > 1000){
        printf("Valor de saque excede o limite permitido.\n");
    } else {
        printf("Saque autorizado.\n");
    }
    return 0;
}