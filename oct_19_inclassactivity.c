#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char fileBuffer[500]; // Reserved space for reading the file

    FILE *fp = fopen("dungeonRoomList_large.txt", "r");

    while (fgets(fileBuffer, sizeof(fileBuffer), fp) != NULL){
        printf("One line: %s\n", fileBuffer);
    }


    fclose(fp);
    return 0;
}