/*
  Name: Dylan Fish
  Purpose: Gets the width and height from the command line and
  creates, prints, and frees the character canvas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "canvasMake.h"

int main(int argc, char **argv){

    // Check to make sure the correct number of arguments were entered
    if(argc != 3){
        printf("Incorrect number of arguments\n");
        printf("Usage: %s <height> <width>\n", argv[0]);
        return 1;
    }

    // Convert command-line arguments into integers
    int height = atoi(argv[1]);
    int width = atoi(argv[2]);

    // Generate random seed
    srand(time(NULL));

    // Create the character canvas
    char **charGrid = createCanvas(width, height);

    // Print the character canvas
    printCanvas(charGrid, width, height);

    // Free the character canvas
    freeCanvas(charGrid, width, height);

    return 0;
}