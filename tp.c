#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "funcoes.h"

int main () {
    char n_orig[58]= "";
    int i, j;
    for (i=0; (strcmp(n_orig, "+0 0 0\n") != 0); i++) {
        setbuf(stdin, NULL);
        fgets(n_orig, 58, stdin);
        if (strcmp("+0 0 0\n", n_orig) == 0) break;
        trataNum(n_orig, i);
    }
    for (j=0; j<i; j++) {
        converteNum(numeros[j]);
    }
    printf("\n");
    return 0;
}
