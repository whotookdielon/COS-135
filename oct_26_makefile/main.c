#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //Opening file to write
    FILE *fp = fopen("inClass.txt", "w");

    // Check if file was opened properly
    if (fp == NULL){ // memory issue, or you don't have permissions
        printf("Could not open file\n");
        return 1;
    }

    // fputs() can only handle strings
    fputs("Hello World\n", fp);
    fclose(fp); // always close file when you're done

    // Open file to append (will crash if file doesn't exist)
    fp = fopen("inClass.txt", "a");

    // fprintf() for outputting to the file ina way like printf
    fprintf(fp, "My fav number is %d\n", 14811);
    fprintf(fp, "My fav number is %d\n", 481);
    fprintf(fp, "My fav number is %d\n", 91);
    fclose(fp);

    // you can use fputs for other things
    fputs("Hi There\n", stdout);
    // you can do the same for fprintf
    fprintf(stderr, "THIS IS AN %d ERROR!\n", 404);

    // Open the file one more time, to read
    fp = fopen("inClass.txt", "r");

    char buffer[200]; // storage for a single line

    // Goal is to find out how many lines in the file
    // buffer: where we are placing the line
    // sizeof(buffer): how much space can we afford to take
    // fp: where we are pulling the data from
    // != NULL: continue grabbing lines until the end of file
    while(fgets(buffer, sizeof(buffer), fp) != NULL){

        // each loop iteration is one line stored in buffer.
        numLines++; // increment by one

    }
    // fp is at the end of the file, lets bring it back to the start

    //fseek() moves the file pointer
    // fp: the file pointer
    // 0: how far relative to the third parameter (in bytes)
    // SEEK_SET: starting point
    //  - SEEK_SET: start of file
    //  - SEEK_CUR: where the fp is currently
    //  - SEEK_END: end of file
    fseek(fp, 0, SEEK_SET);

    // fseek(fp, -20, SEEK_CUR);
    // an example of "go back 20 characters from current position"

    // Storing the current position
    long int currentPosition = ftell(fp); // can use just "long"

    return 0;
}