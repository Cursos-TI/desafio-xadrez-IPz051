#include <stdio.h>

int main (){
    int torre;
    int rainha;
    int bispo;
    int i;
    int j;

    // Bispo movimenta na diagonal 5 casas superior direita
    bispo = 1;
    while (bispo <= 5){
        printf("Diagonal: cima + direita (Bispo na casa:%d)\n", bispo);
        bispo++;
    };
    printf("-------------------------------------\n");

    // Rainha movimenta 8 casas para a esquerda
    rainha = 1;
    do {
        printf("Rainha na Casa: %d\n", rainha);
        rainha++;
    } while (rainha <= 8);
    printf("-------------------------------------\n");

    // Torre movimenta 5 casas para direita
    for (torre = 1; torre <= 5; torre++){
        printf("Torre na Casa: %d\n", torre);
    }
    printf("-------------------------------------\n");

    // Cavalo movimenta 2 para baixo e 1 para esquerda ( loops aninhados )
    for (i = 1; i <= 2; i++){
        printf("Cavalo moveu para BAIXO: %d\n", i);

        if(i == 2){
            for (j = 1; j <= 1; j++){
                printf("Cavalo moveu para ESQUERDA: %d\n", j);
            }
        }
    }
    printf("-------------------------------------\n");


    return 0;
}
