// Sept 30: Pointers and getting user imput from command line, and random numbers.

#include <stdio.h>

//atoi
//rand(), srand()
#include <stdlib.h>

//time()
#include <time.h>

// grab input from command line

// argc: how many arguments we sent to the program
// argv: array of strings (array of an array of characters)
int main(int argc, char **argv){
    
    printf("Hello World\n");

    printf("You have %d arguments\n", argc);

    printf("The first argunent (name of the program) is... %s\n", argv[0]);

    //Check if valid number of arguments (2)
    if (argc != 3){
        printf("You need two arguments\n");
        return 1;
    }

    // Grab the first and second argument (not including the program name)

    // atoi (argument to integer).
    // Problems with this function:
    //      if this fails, it just gives back a 0.

    int num1 = atoi(argv[1]); // Grab first number
    int num2 = atoi(argv[2]); // Grab second number

    // Generate a random number:
    // Set the seed based on time
    srand(time(NULL));

    int rNumber = rand() % 100; //Set the limit of the random to 0-99 (inclusive)
    printf("The random number is... %d\n", rNumber);

    rNumber =50 + rand() % 50; // I want between 50 and 99

    // Pointers

    // Malloc = memory allocation

    // Reserve an "int" of memory, and have the ptr hold the memory address of this space
    int *ptr = malloc(sizeof(int)); // Not automatically freed.

    int x = 4; //Automatically freed when out of scope, its staticly delcared.

    *ptr = 30; // Since ptr is a memory address, you have to follow the address with the (*) pointer and assign 30 to it.
    free(ptr); // Frees the memory

    //*ptr = 2; // unsafe, a potential seg fault.

    // reserving an array.
    // Reserve 'x' size array.
    int *numArray = malloc(sizeof(int) * x);
    numArray[0] = 9;  // *numArray = 9; <- just as accurate of a statement
    numArray[1] = 2;
    numArray[2] = 3;
    numArray[3] = 7;

    ptr = numArray; // set ptr to look at the same memory as numArray.
    ptr++; // this is okay, ptr is not what reserved memory.
    free(numArray);
    numArray = NULL;
    ptr = NULL;

    // Make a 2d array of numbers. 10 * 8 of numbers
    int **gridOfNumbers;
    gridOfNumbers = malloc(sizeof(int*) * 10); //an array of int pointers

    for(int i = 0; i < 10; i++){ // Reserve space for each memory address of the gridOfNumbers
        gridOfNumbers[i] = malloc(sizeof(int) * 8); // each "row" contains space for 8 integers
    }

    gridOfNumbers[2][4] = 9;

    //every malloc you have, you will have to free the memory.
    //first free all the inner mallocs.
    for(int i = 0; i < 10; i++){
        free(gridOfNumbers[i]);
    }

    //now that all inner rows are freed, free outer layer

    free(gridOfNumbers);

    return 0;
}