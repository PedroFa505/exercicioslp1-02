#include <stdio.h>

void main(void){
    float valorCelular, valorConvertido;
    printf("Valor do celular: ");
    scanf("%f", &valorCelular);
    valorConvertido = valorCelular * 3.17;
        if (valorConvertido < 1000){
            printf("Bom negócio\n");
}
        else {
            printf("Mal negócio\n");
}
}
