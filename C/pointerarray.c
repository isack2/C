#include<stdio.h>
#include<stdlib.h>

int main(void){
    int cm_array(int row, int column); //prototype
    int row, column;

    printf("input row and column :");
    scanf("%d %d", &row, &column);
    cm_array(row, column);
}

int cm_arrar(int row, int column) //make dynamic array memory
{
    int temp;
    int ** ptr_row = NULL;
    ptr_row = (int**)malloc(sizeof(int*)*row);
    for(int i = 0 ; i < row ; i++){
        ptr_row[i] = (int*)malloc(sizeof(int)*column);
    }
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            printf("component of array[%d][%d]:", i, j);
            scanf("%d", &temp);
            ptr_row[i][j] = temp;
        }
    }
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < column ; j++){
            printf("%d", ptr_row[i][j]);
            }
            printf("\n");
            }

    for(int i = 0 ; i < row ; i++){
        free(ptr_row[i]);
    }
    free(ptr_row);
}
