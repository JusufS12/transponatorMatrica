#include <stdio.h>

#ifndef MATRICEIO_H
#define MATRICEIO_H

//dimenzije matrice
extern size_t stN, stM;

int argCheck(int const argc, char* const argv[]);
int popuniMatricu(int mat[stN][stM]);
void prikazMatrice(int mat[stN][stM]);

#endif