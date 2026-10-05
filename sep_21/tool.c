// Contains useful tools

#include <stdio.h>

int addTwoNums(int x, int y){
 
    return x+y;
}

int grabNumber(char buffer[], int bufferSize){

    printf("Please enter a number:\n");
    
    //int x;
    //scanf("%d", &x); // The memory of address of x, hence the &

    // fgets method
    char buffer[100]; // Need a Buffer
    // We know the size of the buffer
    printf("Enter a number");
    fgets(buffer, sizeof(buffer), stdin);
    // if we didn't know the size
    int sizeOfBuffer = 100;
    fgets(buffer, sizeOfBuffer * sizeof(buffer[0]), stdin);

}

void createPyramid(int n){
    return;
}

void createReversePyramid(int n){
    return;
}

void iterateArray(int numArray[], int count){
    // for(init step ; condition ; iteration step)
    for (int i = 0; i < count; i++){
        printf("[%d]", numArray[i]);
    }
}