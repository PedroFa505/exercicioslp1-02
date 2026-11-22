#include <stdio.h>

void main(void){
    float mph, kmph;
    printf("Quantas milhas por hora: ");
    scanf("%f", &mph);
    kmph = mph * 1.6;
        if(kmph > 100){
            printf("Desacelere\n");
}
        else if(kmph < 80){
            printf("Acelere\n");
}
        else{
            printf("Mantenha\n");
}
}
