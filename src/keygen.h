#ifndef KEYGEN_H
#define KEYGEN_H

void generateKeyOne (char* emptyString, char* allChars) {
    for (size_t i = 0; i < 17; i++) {
        emptyString[i] = allChars[rand() % 36];
    }

    emptyString[5]  = '-';
    emptyString[11] = '-';
    emptyString[17] = '\0';
}

void generateKeyTwo (char* emptyString, char* allChars) {
    for (size_t i = 0; i < 29; i++) {
        emptyString[i] = allChars[rand() % 36];
    }

    emptyString[5] =  '-';
    emptyString[11] = '-';
    emptyString[17] = '-';
    emptyString[23] = '-';
    emptyString[29] = '\0';
}

void generateKeyThree (char* emptyString, char* allChars) {
    emptyString[0] = allChars[rand() % 10];
    emptyString[1] = allChars[rand() % 10];
    emptyString[2] = allChars[rand() % 10];

    for (size_t i = 3; i < 15; i++) {
        emptyString[i] = allChars[rand() % 36];
    }

    emptyString[15] = ' ';
    emptyString[16] = allChars[rand() % 10];
    emptyString[17] = allChars[rand() % 10];
    emptyString[18] = '\0';
}

#endif
