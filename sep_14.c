/*
Block Comment
*/

#include <stdio.h> // Almost always included (Standard Input/Output)


// Entry point for the program
int main(){

    // Common print statement
    // MUST use double quotes for strings.
    printf("Hello World");

    int x; // Declare x as a variable. This also reserves space for it. int = 32 bits

    float y = 1.5; //declare and assign.
    x = 5; //assign to x, do not redeclare

    //if statement, everything in the {} will execute if condition is true
    if (x==5){
        int z = 12; //scope of 'z' is this if statement.
    }
    int z = 2; // free to redeclare z because old one is gone


    // Declare and fill a character array
    char buffer[20] = "Hello";

    //loops

    //while loop
    int c = 0;
    while(c < 20){
        c++; // increment value by one. c += 1 or c = c + 1

        printf("C is %d", c); //placeholder. %d is for a digit
    }

    printf("Character a is %d\n", 'a');

    // for loop
    // combines three aspects. Init, condition; incrementation

    for (int counter = 0; counter < 5; counter++){ // scope of the counter is the loop
        printf("counter is %d\n", counter);
    }

    // all statements end with a ;
    return 0; 
}