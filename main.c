#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invert(char* str) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(int argc, char *argv[]) {

    int num = atoi(argv[1]); // número inteiro para ser convertido em binário

    char ret[32] = {};

    for (int i = 31; i >= 0; i--) {   // percorre cada bit do número (32 bits em um int)
        if ((num >> i) & 1) {     // verifica se o bit na posição atual é 1
            ret[i] = '1';
        } else {
            ret[i] = '0';
        }
    }

    invert(ret);

    printf("%s",ret);

    return 0;
}