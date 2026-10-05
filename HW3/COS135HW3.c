#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getRandomChar(char *charList, int size){
    // get a random number between 0 and size
    int n = rand()%size;
    return charList[n];
}

int main(){
    char randomCharList[5] = {'k','5','a','$','\\'};
    // Generate random seed
    srand(time(NULL));
    char newCharacter = getRandomChar(randomCharList,  5);
}