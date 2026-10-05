/* Name: Dylan Fish
   Date: 09/25/2026
   Description: This code defines multiple functions such as createPyramid, createPyramidReverse, and gradeHistogram,
                then executes them to create pyramids of characters with the height of any number inputted.*/
// Bad description im sorry...

#include <stdio.h>

void createPyramid(int height){
    for (int row = 0; row < height; row++){ //Loop to control the rows
        /*Before we pring the x's for the pyramid we need to print spaces*/
        for (int space = 0; space < height - row - 1; space++){
            printf(" ");
        }
        for (int x = 0; x < (2 * row) + 1; x++){ // Prints the amount of X's per row (row = 0; x = 1, row = 1; x = 3; etc.)
            printf("x"); 
        }
        printf("\n"); //New line after the row to seperate
    }
}

void createPyramidReverse(int height){
    for (int row = 0; row < height; row++){ //Same loop as last time
        for (int space =  0; space < row; space++){
            printf(" ");
        }
        for (int x = 0; x < (2 * (height - row)) - 1; x++){ // The opposite of (2 * row) + 1, creates the reverse amount for the amount of rows
            printf("x");
        }
        printf("\n");
    }
}

void gradeHistogram(int grades[], int count){ //Takes the 2 required parameters, array and count of how many things are in the array
    for (int i = 0; i < count; i++){
        int numberOfXs;
        if (grades[i] >= 90){ 
            /* We start at 90 because C will start from top to bottom, instead of it seeing 85 is >= 60 and setting 
            it to 4 x's, we make it go from highest to lowest to the closest one that fits. */
            numberOfXs = 10;
        }
        else if (grades[i] >= 80){
            numberOfXs = 8;
        }
        else if (grades[i] >= 70){
            numberOfXs = 6;
        }
        else if (grades[i] >= 60){
            numberOfXs = 4;
        }
        else{
            numberOfXs = 2;
        }
        for (int x = 0; x < numberOfXs; x++){
            printf("x");
        }
        printf("\n");
    }
}

int main(){ //Main function that the homework is asking for and for the code to run
    createPyramidReverse(7); // Pulls function from previously defined code
    printf("\n");
    createPyramid(7); // Pulls function from previously defined code
    printf("\n");
    int grades[] = {90, 64, 50, 72, 85, 95}; // List of grades given
    gradeHistogram(grades, 6);
    return 0;
}