#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c;
    int nw = 0;
    int state = OUT;

    int palavras[20];

    //Zera o array
    for (int i = 0; i < 20; ++i) {
        palavras[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) { //Se entramos em uma palavra
                palavras[nw - 1]++; //Incrementamos a palavra
                nw = 0; // Zera o contador
            }
            state = OUT; // FIndo para fora da palavra
        } else {
            state = IN; // Mudando o estado para dentro da palavra
            ++nw; // Incrementa o contador de palavras
        }
    }

    //Criar o historiograma
    for (int i = 0; i < 20; ++i) {
        printf("%2d | ", i + 1); // Imprime a escala de 1 a 20, o mais 1 é por conta do indice ser -1
        for (int j = 0; j < palavras[i]; ++j) {
            putchar('='); // Imprime um sinal de igual para quantos caracteres tem cada palavra
        }
        putchar('\n');
    }
    
}
