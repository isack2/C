#include<stdio.h>
#include<stdlib.h>

int m_array(int row, int column); //prototype
int main(void){
    int r, c;

    printf("input row and column :");
    scanf("%d", &r);
    scanf("%d", &c);
    m_array(r, c);
}

int m_arrar(int row, int column) //make dynamic array memory
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

    return 0;

    for(int i = 0 ; i < row ; i++){
        free(ptr_row[i]);
    }
    free(ptr_row);
}
