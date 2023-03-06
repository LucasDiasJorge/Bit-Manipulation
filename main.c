#include <stdio.h>

#define MAX_LENGTH 1000

char* encrypt(char* plaintext, int key) {

    int i = 0;

    while (plaintext[i] != '\0') {

        if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {

            plaintext[i] = (plaintext[i] - 'a' + key) % 26 + 'a';

        }
        
        if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {

            plaintext[i] = (plaintext[i] - 'A' + key) % 26 + 'A';

        }
        i++;
    }

    return plaintext;

}

int main() {

    char plaintext[MAX_LENGTH];
    int key;

    printf("Enter plaintext: ");
    fgets(plaintext, MAX_LENGTH, stdin); // fgets explained (set on plaintext, with max length, from standard input) 
    
    printf("Enter key: ");
    scanf("%d", &key);

    char* ciphertext = encrypt(plaintext, key);

    printf("Ciphertext: %s\n", ciphertext);

    return 0;

}