#include "../inc/matriceio.h"
#include <stdio.h>
#include <stdlib.h>


void transponator(int mat[stN][stM], int tmat[stM][stN]) {

    size_t i, j, tmp;

    for (i = 0; i < (stN - 1); i++) {
        for (j = 0; j < (stM - 1); j++) {
            tmat[j][i] = mat[i][j];
        }
    }

    tmp = stN;
    stN = stM;
    stM = tmp;
}

int main(int const argc, char* const argv[]) {

    if (argCheck(argc, argv) != EXIT_SUCCESS) {
        return EXIT_FAILURE;
    }

    int matrica[stN][stM];
    int transponant[stM][stN];

    if (popuniMatricu(matrica) != EXIT_SUCCESS) {
        return EXIT_FAILURE;
    }
    
    prikazMatrice(matrica);

    transponator(matrica, transponant);
    prikazMatrice(transponant);

    return EXIT_SUCCESS;
}