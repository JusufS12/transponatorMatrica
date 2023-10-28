#include <stdio.h>
#include <stdlib.h>

#define error(msg, ...) printf("[!] " msg "\n", ##__VA_ARGS__)
#define POINT "V\n"


void grafickiPrikaz(int n, int m) {

    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("[] ");
        }
        printf("\n");
    }

}


int main(int const argc, char* const argv[]) {

    if(argc != 3) {
        puts("usage: tmat <number of columns> <number of rows>");
        return EXIT_FAILURE;
    }

    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    if(n <= 0 || m <= 0) {
        error("arguments must be integers bigger than 0");
        return EXIT_FAILURE;
    }
    
    grafickiPrikaz(n, m);
    return EXIT_SUCCESS;

}