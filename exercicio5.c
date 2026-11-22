#include <stdio.h>

int main(void){
    float num, soma;
    soma = 0;
    printf("Digite um número: ");
    scanf("%f", &num);
        while(num != 0){
            soma += num;
            printf("Digite um número: ");
            scanf("%f", &num);
}
        printf("A soma é: %.2f\n", soma);
}
