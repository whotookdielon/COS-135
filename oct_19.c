#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// String tokenizer
// Same as the string "split" of python, used to seperate a string based on a character

int main(){

    //String to split = buffer
    //deli = what is seperating our data
    char buffer[] = "Dylan,20,Computer Science";
    char deli[] = ",";

    char *tok = strtok(buffer, deli); // First tokenizer run

    while (tok != NULL){ // tokenizer will be NULL when it hits the end of the string
        printf("String part = %s\n", tok);
        tok = strtok(NULL, deli); // Subsequent runs, use "NULL" for the input buffer
    }
    
    //open the file to *read*
    // first parameter: file name (relative path)

    // Second parameter: how are you opening?
    // (r = read, w = write, a = append, r+ read and write, w+ write and read)
    // w will create the file if it doesn't exist
    // r+ will error if the file does not exist
    // w+ will create the file if it doesn't exist
    FILE *fp = fopen("test.txt", "r");

    char fileBuffer[50]; // reserve some space for reading a file.
    // fgets takes 3 things
    // 1. buffer
    // 2. size of buffer
    // 3. where are we reading from
    /* Manual way, reading one line at a time
    fgets(fileBuffer, sizeof(fileBuffer), fp); // grabs one line of info
    printf("one line: %s\n", fileBuffer);
    fgets(fileBuffer, sizeof(fileBuffer), fp); // grabs one line of info
    printf("one line: %s\n", fileBuffer);
    fgets(fileBuffer, sizeof(fileBuffer), fp); // grabs one line of info
    printf("one line: %s\n", fileBuffer);
    fgets(fileBuffer, sizeof(fileBuffer), fp); // grabs one line of info
    printf("one line: %s\n", fileBuffer);
    */

    // Continue getting one line so long as the fgets does not give "NULL"
    // fgets gives "NULL" when there are no more lines
    while (fgets(fileBuffer, sizeof(fileBuffer), fp) != NULL){
        printf("One line: %s\n", fileBuffer);
    }

    fclose(fp); // always close file when done
    return 0;

}