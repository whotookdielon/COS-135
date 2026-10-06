/*
 Name: Dylan Fish
 Purpose: Creates, fills, prints, and frees the character cavnas.
 Help Received: Troy Shotter in COS135
*/

#include <stdio.h>
#include <stdlib.h>
#include "canvasMake.h"

// List of possible random characters
static char randomCharList[5] = {'k','5','a','$','\\'};

// Picks one random character from the provided character list
// and returns the character
static char pickChar(char *charList, int size){
    // Gets a random number between 0 and size
    int n = rand()%size;

    return charList[n];
}

// Returns a random character based on the given probability
// or returns a space if otherwise.
static char genRandomChar(double chance, char *charList, int size){

    // Generate random number between 0 and 1
    double randomNum = (double)rand()/RAND_MAX;

    if(randomNum < chance){
        return pickChar(charList, size);
    }

    return ' ';

}

// Allocates memory for the canvas and fills each position with
// either a space or a random charcter.
char **createCanvas(int width, int height){

    // Generate first layer of the character array
    char **charGrid = malloc(sizeof(char *) * height);

    // charGrid is an array of character 
    
    // Expand each pointer to an array of characters
    for(int i = 0; i < height; i++){
        charGrid[i] = malloc(sizeof(char) * width);
    }

    // Fill every position of the grid
    for(int row = 0; row < height; row++){
        for(int column = 0; column < width; column++){
            charGrid[row][column] =
                genRandomChar(0.20, randomCharList, 5);
        }
    }
    return charGrid;
}

// Used to print every character in the canvas
void printCanvas(char **canvas, int width, int height){
    for(int row = 0; row < height; row++){
        for(int column = 0; column < width; column++){
            printf("%c", canvas[row][column]);
        }
        printf("\n");
    }
}

// Frees all memory allocated for the canvas
void freeCanvas(char **canvas, int width, int height){

    // Free every row
    for(int i = 0; i < height; i++){
        free(canvas[i]);
    }
    // Free the array of pointers
    free(canvas);
}