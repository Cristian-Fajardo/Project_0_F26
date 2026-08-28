#include <stdlib.h>

void rand_string(char *str, size_t size) {
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (size_t i = 0; i < size; i++) {
        int index = rand() % (sizeof(charset) - 1);
        str[i] = charset[index];
    }
    str[size] = '\0';
}