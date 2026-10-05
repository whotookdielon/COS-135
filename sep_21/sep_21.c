// Split every file into a header and a c file.

#include <stdio.h> // Standard input library
#include "tools.h" // include other header file

int main(){ // Entry point for c

    // Use that function we are including
    int z = addTwoNums(5, 10);

    printf("Number is %d\n", z);

    return 0;
}