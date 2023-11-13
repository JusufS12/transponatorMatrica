#include "../inc/matriceio.h"
#include <stdio.h>
#include <stdlib.h>


void transponator(int mat[stN][stM], int tmat[stM][stN]) {

    size_t i, j, tmp;

    for (i = 0; i < stN; i++) {
        for (j = 0; j < stM; j++) {
            tmat[j][i] = mat[i][j];
        }
    }

    tmp = stN;
    stN = stM;
    stM = tmp;
}

int main(int const argc, char* const argv[]) {

    if(argc != 3) {
		puts("usage: tmat <number of columns> <number of rows>");
		return EXIT_FAILURE;
	}

    if (setMatrixSize(atoi(argv[1]), atoi(argv[2])) != EXIT_SUCCESS) {
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
