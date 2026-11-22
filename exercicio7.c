#include <stdio.h>
#include <string.h>
//Vou considerar que cada time se enfrenta apenas uma vez, então cada um jogará 19 partidas

void main(void){
    int vitorias, derrotas, empates, pontos, partidas, times, maior, menor;
    char nome[50], lider[50], lanterna[50];
    partidas = 0;
    maior = 0;
    menor = 1000;
    times = 20;
    printf("Nome do time: ");
    scanf("%49s", nome);
    printf("Vitórias: ");
    scanf("%d", &vitorias);
    printf("Derrotas: ");
    scanf("%d", &derrotas);
    printf("Empates: ");
    scanf("%d", &empates);
    partidas += vitorias + derrotas + empates;
        if(partidas != 19){
            printf("Inválido\n");
            return;
}
        while(times > 1){
            partidas = 0;
            pontos = 0;
            pontos += vitorias * 3 + empates;
                if(pontos > maior){
                    maior = pontos;
                    strcpy(lider, nome);
}
                if(pontos < menor){
                    menor = pontos;
                    strcpy(lanterna, nome); 
}  
            times -= 1;
            printf("Nome do time: ");
            scanf("%49s", nome);
            printf("Vitórias: ");
            scanf("%d", &vitorias);
            printf("Derrotas: ");
            scanf("%d", &derrotas);
            printf("Empates: ");
            scanf("%d", &empates);
            partidas += vitorias + derrotas + empates;
                if(partidas != 19){
                    printf("Inválido\n");
                    return; 
}
}
    printf("Líder: %s\n", lider);
    printf("Lanterna: %s\n", lanterna);
}
