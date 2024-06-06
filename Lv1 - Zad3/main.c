#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int binNiz[32];
    int decimal = 0;

    srand(time(NULL));

    printf("Binarni zapis: ");
    for (int i = 0; i < 32; i++) {
        binNiz[i] = rand() % 2;
        printf("%d", binNiz[i]);
    }
    printf("\n");

    for (int i = 0; i < 32; i++) {
        decimal = decimal * 2 + binNiz[i];
    }

    if (binNiz[0] == 1) {
        decimal -= 4294967296;
    }

    printf("Dekadski zapis: %d\n", decimal);

    return 0;
}
