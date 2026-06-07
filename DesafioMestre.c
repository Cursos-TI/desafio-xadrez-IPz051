#include <stdio.h>

void moverTorreDireita(int casas, int casaAtual){
    if(casas <= 0){
        return;
    }

    printf("Torre - casa %d:\n", casaAtual);
    printf("Direita\n");
    moverTorreDireita(casas - 1, casaAtual + 1);
}

void moverRainhaEsquerda(int casas, int casaAtual){
    if(casas <= 0){
        return;
    }

    printf("Rainha - casa %d:\n", casaAtual);
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1, casaAtual + 1);
}

void moverBispoCimaDireita(int casas, int casaAtual){
    if(casas <= 0){
        return;
    }

    printf("Bispo - casa %d (diagonal):\n", casaAtual);
    for(int v = 0; v < 1; v++){
        printf("Cima\n");
        for(int h = 0; h < 1; h++){
            printf("Direita\n");
        }
    }

    moverBispoCimaDireita(casas - 1, casaAtual + 1);
}

int main (){
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int casasBispo = 5;

    const int cavaloCima = 2;
    const int cavaloDireita = 1;

    printf("=== BISPO (diagonal: cima + direita) ===\n");
    moverBispoCimaDireita(casasBispo, 1);
    printf("\n");

    printf("=== RAINHA (para a esquerda) ===\n");
    moverRainhaEsquerda(casasRainha, 1);
    printf("\n");

    printf("=== TORRE (para a direita) ===\n");
    moverTorreDireita(casasTorre, 1);
    printf("\n");

    printf("=== CAVALO (em L: 2 cima + 1 direita) ===\n");
    for(int v = 1; v <= cavaloCima; v++){
        printf("Cavalo - passo vertical %d:\n", v);
        printf("Cima\n");

        for(int h = 1; h <= cavaloDireita; h++){
            if(v < cavaloCima){
                break;
            }

            if(h != 1){
                continue;
            }

            printf("Cavalo - passo horizontal %d:\n", h);
            printf("Direita\n");
        }
    }
    printf("\n");


    return 0;
}
