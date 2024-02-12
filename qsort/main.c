#include "qsort.h"

#define MAXLINES 500

int readlines(char * lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);

char * lineptr[MAXLINES];

int main() {
    int nlines;

    if ((nlines = readlines(lineptr, MAXLINES)) > 0) {
        qsort(lineptr, 0, nlines - 1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}