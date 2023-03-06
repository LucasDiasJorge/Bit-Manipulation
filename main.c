#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binToDec(unsigned int bin) {
    int dec = 0, i = 0;
    while (bin != 0) {
        int rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

// Two's complement
int binToDec2(unsigned int bin, int numBits) {

    unsigned int dec = 0;
    int signBit = 1 << (numBits - 1);

    if (binToDec(bin) & signBit) { // Signal verify
        dec = (-~bin - 10000000) * 10;
        dec = binToDec(dec);
    }
    else {
        dec = binToDec(bin);
    }
    return -dec;
}

int main() {

    unsigned int value = 10101010;

    printf("Value of 10101010 in decimal is %d\n", binToDec(value));
    printf("Value of 10101010 in decimal using Two's complement is %d\n", binToDec2(value, 8));

    return 0;
}
