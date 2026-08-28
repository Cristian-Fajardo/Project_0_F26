#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *rand_string (int length) {
    static const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    char *word = malloc(length + 1);
    if (word == NULL) {
        return NULL;
    }

    for (int i = 0; i < length; i++){
        int index = rand() % (sizeof(charset) - 1);
        word[i] = charset[index];
    }

    word[length] = '\0';

    return word;

}