/*Es 3A - Scrivi un programma che:
1- Dichiara un array di char di 20 elementi
2- Legge la frase “Ciao Mondo Ciao”
3- Calcola e stampa la lunghezza della frase inserita
4- Trasforma tutto il testo in maiuscolo
5- Inserisce al posto della parola “Mondo” la parola “Mamma” (CIAO MONDO CIAO diventa CIAO
MAMMA CIAO)
6- Sostituisce a tutte le vocali la lettera “X” e stampa tutta la frase
(es. ciao mamma diventa cXXX mXmmX)*/
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define DIM 20
int main() {
    char frase[DIM];
    int i, lung;
    char frase1[DIM];
    printf("scrivi Ciao Mondo Ciao:\t\n");
    gets(frase);
    if (strcmp(frase, "Ciao Mondo Ciao")) {
        printf("frase non valida\n");
    }
    else {
        lung = strlen(frase);
        printf("\nla frase ha dimensione:\t%d\n", lung);
        for (i = 0;i < DIM;i++) {
            if (frase[i] >= 'a' && frase[i] <= 'z') {
                frase[i] = frase[i] + 'A' - 'a';
            }
        }
        printf("\nla frase tutta maiuscola e':\t");
        puts(frase);
        printf(" \n");
        for (i = 0;i < DIM-4;i++) {
            if (strncmp(frase+i, "MONDO",5)==0) {
               
                                strncpy(frase1, frase, i);
                                frase1[i] = '\0';
                                strcat(frase1, "MAMMA");
                                strncat(frase1- DIM+ strlen(frase1), frase + i + 5, DIM - i - 5 - 1);

            }
        }
        printf("\nla frase tutta modificata e':\t");
        puts(frase1);
        printf("\n");
        for (i = 0;i < DIM;i++) {
            if (frase1[i] == 'A' || frase1[i] == 'E' || frase1[i] == 'I' || frase1[i] == 'O' || frase1[i] == 'U') {
                frase1[i] = 'X';
            }
        }
        printf("\nla frase sostituita e':\t");
        puts(frase1);
        printf("\n");
    }

}