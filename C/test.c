#include<stdio.h>
#include<stdlib.h>

int main(void){

    int** ptr = (int**)malloc(sizeof(int*)*2);
    for(int i = 0 ; i < 2 ; i++){
        ptr[i] = (int*)malloc(sizeof(int)*2);
        }

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            ptr[i][j] = i + 2*j;
            printf("%d", ptr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0 ; i < 2 ; i++){
        free(ptr[i]);
    }
    free(ptr);
}
