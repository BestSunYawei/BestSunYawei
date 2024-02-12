#include <stdio.h>

int my_getline (char *p, int len) {
    int i = 0;

    while (i < len - 1 && (*(p + i) = getchar()) != EOF &&  *(p + i) != '\n')
        i++;
    
    *(p + i) = '\0';

    return i;
}