#include <stdio.h>

int i;
int j;
int main(){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            printf("x");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("x");
        }
        printf("\n");
    }
    return 0;
}