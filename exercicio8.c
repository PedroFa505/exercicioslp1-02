#include <stdio.h>

void main(void){
    int n1, n2;
    printf("Escolha um número: ");
    scanf("%d", &n1);
    printf("Escolha outro: ");
    scanf("%d", &n2);
        if(n2 > n1) {
            for(int i = n1 + 1; i < n2; i++){
                printf("%d, ", i);
            }
        } 
        else if (n2 < n1) {
            for(int i = n2 + 1; i < n1; i++){
                printf("%d, ", i);
            }
        }
        else {
            printf("Os números são iguais\n");
        }
}
