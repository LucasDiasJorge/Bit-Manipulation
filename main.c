#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int num = atoi(argv[1]);

    int numTwo = atoi(argv[2]);

    int print = num & numTwo;
    printf("AND operator: %d & %d = %d\n", num, numTwo, print);

    print = num ^ numTwo;
    printf("XOR operator: %d ^ %d = %d\n", num, numTwo, print);

    print = ~num;
    printf("NOT operator (include signal bit): ~%d = %d\n", num, print);

    return 0;
}