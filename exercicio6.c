#include <stdio.h>

void main(void){
    int n, soma;
    soma = 0;
    printf("Número: ");
    scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            soma += i * i; 
}
    printf("%d\n", soma);

}
