#include <stdio.h>

int main(){
    int nota1, nota2, nota3, nota4;
    double media;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%d", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    if (media >= 6){
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }   
    return 0;
}