#include <stdio.h>

int main() { 
    int num1, num2;
        printf("Digite um número:");
        scanf("%d", &num1);
        printf("Digite outro:");
        scanf("%d", &num2);
            if(num1 > num2) {
                printf("O maior número é %d\n", num1);
} 
            else if(num1 == num2) {
                printf("Os números são iguais \n");
}
            else { 
                printf("O maior número é %d\n", num2);
}
}

