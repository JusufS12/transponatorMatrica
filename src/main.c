#include "../inc/matriceio.h"
#include <stdio.h>
#include <stdlib.h>


void transponator(int mat[3][3], int tmat[3][3]) {

    size_t i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tmat[j][i] = mat[i][j];
        }
    }
}

int main(void) {

    int matrica[3][3];
    int transponant[3][3];

    popuniMatricu(matrica);
    prikazMatrice(matrica);

    transponator(matrica, transponant);
    prikazMatrice(transponant);

    return EXIT_SUCCESS;
}