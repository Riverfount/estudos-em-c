#include <stdio.h>

int main(){
    int idade;
    char carteira;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Você possui carteira de motorista? (s/n) ");
    scanf(" %c", &carteira);
    
    // Exemplo com &&
    if (idade >= 18 && carteira == 's'){
        printf("Voce pode dirigir.\n");
    } else {
        printf("Voce não pode diriger.\n");
    }
    
    // Exemplo com ||
    if (idade < 12 || idade > 60){
        printf("Voce tem direito a desconto na entrada do cinema.\n");
    } else {
        printf("Voce paga inteira no cinema.\n");
    }

    return 0;
}