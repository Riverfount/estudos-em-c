#include <stdio.h>

int main(){
    char sexo;
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        printf("Masculino\n");
    } else if (sexo == 'F' || sexo == 'f') {
        printf("Feminino\n");
    } else {
        printf("Sexo invalido\n");
    }
    return 0;
}