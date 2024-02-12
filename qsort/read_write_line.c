#include "qsort.h"

#define MAXLEN 1000

int my_getline(char *, int);
char * alloc(int n);

int readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = my_getline(line, MAXLEN)) > 0) {
        if (nlines >= maxlines || (p = alloc(len)) == NULL) {
            return -1;
        } else {
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }

    return nlines;
}

void writelines(char *lineptr[], int nlines) {
    int i;

    for (i = 0; i < nlines; i++) 
        printf ("%s\n", lineptr[i]);
}
