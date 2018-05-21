#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "keygen.h"

int main(int argc, char const *argv[]) {
    srand(time(NULL));

    int keysType = atoi(argv[1]);
    int numberOfKeys = atoi(argv[2]);
    char ALL_CHARS[36] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    FILE *f = fopen("Keys", "w");

    if (keysType == 1) {
        char stringForKey[18];
        while (numberOfKeys) {
            generateKeyOne(stringForKey, ALL_CHARS);
            fprintf(f, "%s\n", stringForKey);
            numberOfKeys--;
        }
    } else if (keysType == 2) {
        char stringForKey[30];
        while (numberOfKeys) {
            generateKeyTwo(stringForKey, ALL_CHARS);
            fprintf(f, "%s\n", stringForKey);
            numberOfKeys--;
        }
    } else if (keysType == 3) {
        char stringForKey[19];
        while (numberOfKeys) {
            generateKeyThree(stringForKey, ALL_CHARS);
            fprintf(f, "%s\n", stringForKey);
            numberOfKeys--;
        }
    } else {
        printf("Error! Invalid type!\n");
    }

    fclose(f);
    return 0;
}
