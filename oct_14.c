#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a new struct
typedef struct{ // in total, this struct will take up 108 bytes of memory
    int age;
    char name[100];
    int height; // height in cm    
} Person;


int main(){

    printf("Hello World\n");

    Person aPerson;

    aPerson.age = 37;
    strcpy(aPerson.name, "Troy");
    aPerson.height = 2000;

    printf("%s's age is %d\n", aPerson.name, aPerson.age);
    
    Person *personPtr;
    personPtr = malloc(sizeof(Person)); // on the heap

    free(personPtr);

    return 0;
}