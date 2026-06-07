#include <stdio.h>

int main (){
    int torre;
    int rainha;
    int bispo;

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
    return 0;
}